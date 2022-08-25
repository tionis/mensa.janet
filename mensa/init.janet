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
