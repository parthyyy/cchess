CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEP = ../../src/commands.c ../../src/commands.h ../../src/colors.h
SRC = ../../src/commands.c

test_commands: test_commands.c $(DEP)
	$(CC) $(CFLAGS) $(SRC) test_commands.c -o test_commands
