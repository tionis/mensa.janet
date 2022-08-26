(use spork)
(import http)
(import wanda/date)
(import ./weird-csv)

(defn get-week [&opt week-number]
  (default week-number (date/get-week-number))
  (def raw_data (weird-csv/parse ((http/get (string "https://www.stwno.de/infomax/daten-extern/csv/UNI-P/" week-number ".csv")) :body)))
  (def mapping (first raw_data))
  (def formatted_data (map (fn [x] (def ret @{})(loop [i :range [0 (length x)]] (put ret (mapping i) (x i))) ret) (slice raw_data 1 -1)))
  formatted_data)

(defn to_two_digit_string [num]
  (if (< num 9)
    (string "0" num)
    (string num)))

(defn format-date-german [date]
  (string (to_two_digit_string (inc (date :month-day)))
          "."
          (to_two_digit_string (inc (date :month)))
          "."
          (date :year)))

(defn get-today [&opt week-number]
  (def day (format-date-german (date/today)))
  (filter (fn [x] (= (x "datum") day)) (get-week)))

(defn get-tomorrow [&opt week-number]
  (def day (format-date-german (date/days-after 1)))
  (filter (fn [x] (= (x "datum") day)) (get-week)))
