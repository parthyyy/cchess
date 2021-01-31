CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEP = ../../src/game.c ../../src/game.h ../../src/commands.c
SRC = ../../src/game.c ../../src/commands.c

test_game: test_game.c $(DEP)
	$(CC) $(CFLAGS) $(SRC) test_game.c -o test_game
