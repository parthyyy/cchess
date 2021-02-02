# test

This folder contains my custom tests for every module in `cchess`.

Originally, I did "unit-testing" by creating a separate main function,
compiling it with the module's `.c` file, and running the main. I had
to keep those separate so that I could have individual `Makefile`s for
each module.

This had the benefit of easily testing the functions which require
user input. However I eventually wanted something more robust and
automated; this method just felt bad. I discovered the Unity
framework, but it doesn't test cmdline input very well. So I have
to keep both sets of tests, separately now.
