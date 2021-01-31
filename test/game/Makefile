CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

SRC_DIR = ../../src

DEP = $(SRC_DIR)/game.c $(SRC_DIR)/game.h $(SRC_DIR)/commands.c
SRC = $(SRC_DIR)/game.c $(SRC_DIR)/commands.c

test_game: test_game.c $(DEP)
	$(CC) $(CFLAGS) $(SRC) test_game.c -o test_game
