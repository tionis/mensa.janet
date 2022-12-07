(declare-project
  :name "mensa"
  :description "mensa helper for uni passau"
  :dependencies ["https://github.com/janet-lang/spork"
                 "https://github.com/joy-framework/http"
                 "https://tasadar.net/tionis/chronos"]
  :author "tionis.dev"
  :license "MIT"
  :url "https://tasadar.net/tionis/mensa.janet"
  :repo "git+https://tasadar.net/tionis/mensa.janet.git")

(declare-source
  :source ["mensa"])

(declare-executable
  :name "mensa"
  :entry "mensa/cli.janet"
  :install true)
