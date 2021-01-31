CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

SRC_DIR = ../../src

DEP = $(SRC_DIR)/display.c $(SRC_DIR)/display.h
SRC = $(SRC_DIR)/display.c

test_display: test_display.c $(DEP)
	$(CC) $(CFLAGS) $(SRC) test_display.c -o test_display
