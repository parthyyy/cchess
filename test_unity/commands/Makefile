CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

ROOT = ../..

DEPEND = test_commands.c $(ROOT)/src/commands.c $(ROOT)/src/commands.h
SRC_FILES = test_commands.c $(ROOT)/src/commands.c $(ROOT)/unity/unity.c

test_commands: $(DEPEND)
	$(CC) $(CFLAGS) $(SRC_FILES) -o test_commands
