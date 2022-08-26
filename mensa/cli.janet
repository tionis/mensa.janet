#!/bin/env janet
(import ./init :as "mensa")
(defn main [myself & args]
  (if (= (length args) 0)
      (do
        (print (print (string/format "%P" (mensa/get-week))))
        (os/exit 0)))
  (match args
    "today" (error "Not implemented")
    _ (eprint "Command does not exist!")))
