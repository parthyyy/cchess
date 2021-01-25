CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

test_commands: test_commands.c commands.c commands.h ../colors.h
	$(CC) $(CFLAGS) test_commands.c commands.c -o test_commands
