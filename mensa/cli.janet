#!/bin/env janet
(import ./init :as "mensa")

(defn main [myself & args]
  (if (= (length args) 0)
      (do
        (print (print (string/format "%P" (mensa/get-week))))
        (os/exit 0)))
  (match args
    "today" (print (string/format "%P" (map (fn [x] (x "name")) (mensa/get-today)) "\n"))
    "tomorrow" (print (string/format "%P" (map (fn [x] (x "name")) (mensa/get-tomorrow)) "\n"))
    "week" (do (def data (mensa/get-week))
               (def days @{})
               (each item data
                 (if (not (days (item "tag"))) (put days (item "tag") @[]))
                 (array/push (days (item "tag")) (item "name")))
               (print (string/format "%P" days)))
    _ (eprint "Command does not exist!")))
