CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

SRC_DIR = ../../src

DEP = $(SRC_DIR)/commands.c $(SRC_DIR)/commands.h $(SRC_DIR)/colors.h
SRC = $(SRC_DIR)/commands.c

test_commands: test_commands.c $(DEP)
	$(CC) $(CFLAGS) $(SRC) test_commands.c -o test_commands
