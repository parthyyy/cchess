# cchess

cchess is a chess game on the command line, implemented in C.

# Prerequisites

* gcc compiler
* Make

# Features

In cchess, you can:

* Enjoy 1-player or 2-player games
  * 1-player games will pit you against a chess engine
  * You are allowed to choose your color against the AI.
* Save your games
  * cchess has its own savefile format, where you can save in-progress 
    games, load them later, and continue playing

You can also:

* Resign the game. You lose.
* Offer a draw. You and your opponent agree that no one wins.
* Quit the program. You end the game, but no result is declared yet.
  * Here, you will have the option of saving a game.

# Installing

To install cchess, download the latest executable from the releases page. 

If you want to compile the source code by yourself, clone the repository first.
Enter the root directory of the source code, and run the `Makefile`. It should
produce an executable output in the same directory, titled `cchess` or `cchess.exe`

# Running

In the command line, simply enter `./cchess` or `.\cchess.exe`. Run with the
`--help` or `-h` flag to see usage and help notes.

`cchess` will obviously need to print the chess board. This can be done in
unicode or ASCII. You can specify at the command line, with `--utf8` or
`--ascii`. If no flag is given, the program defaults to ASCII.

The game will read input that you enter. It stops reading after the first
whitespace character. Entering commands like `yes no` will be interpreted
as `yes`.

# Possible future features

* Implement chess variants (chess960, chaturanga, Capablanca chess, etc.)
* Add a GUI
* Make my own engine as the AI opponent
