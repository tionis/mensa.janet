#!/bin/env janet
(import ./init :as "mensa")

(defn pp-week [week]
  (def days @{})
  (each item week
    (if (not (days (item "tag"))) (put days (item "tag") @[]))
    (array/push (days (item "tag")) (item "name")))
  (print (string/format "%P" days)))

(defn main [myself & args]
  (if (= (length args) 0)
      (do
        (print (print (string/format "%P" (mensa/get-week))))
        (os/exit 0)))
  (match args
    ["today"] (print (string/format "%P" (map (fn [x] (x "name")) (mensa/get-today))))
    ["tomorrow"] (print (string/format "%P" (map (fn [x] (x "name")) (mensa/get-tomorrow)))) # TODO this does not work across week boundaries -> switch to non-week-number based solution, using normal date structs instead
    ["week"] (print (pp-week (mensa/get-week)))
    [number] (print (pp-week (mensa/get-week (scan-number number))))
    _ (eprint "Command does not exist!")))
