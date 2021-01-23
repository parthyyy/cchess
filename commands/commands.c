/** commands.c

Implements functions for user input at cmdline.

Gets commands from user.
Validates commands.
Can also get a "yes" or "no" response.

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "commands.h"
#include "../colors.h"

/* get_command()
	@buffer 	char array to place user's input
	@buffer_size 	max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	str containg the command. 

	But really, the return value just points to the contents of *buffer.
	strtok()'s destructiveness allows the caller to treat *buffer as
	a string.

	Read in cmdline input into a buffer to get a command.
	Treats the first token separated by whitespaces as the command.
*/
char* get_command(char* buffer, const int buffer_size, const int turn)
{
	char delims[] = " \r\n\t";
	char* token = NULL;

	if (turn == BLACK)
	{
		printf("Black >>> ");
	}
	else
	{
		printf("White >>> ");
	}

	do
	{
		fgets(buffer, buffer_size, stdin);
	} while ((token = strtok(buffer, delims)) == NULL);

	// returning local ptr, but only the address it contains
	// is important. main() will still be able to use it because
	// it accesses the contents of *buffer
	return token;
}

/* to_lowercase()

	Converts a null-terminated string to all lowercase.
*/
static void to_lowercase(char* s)
{
	char* tmp = s;
	while (*tmp != '\0')
	{
		*tmp = tolower(*tmp);
		tmp++;
	}
}

/* validate_command()
	@command 	string containing the user's inputted command

	@return 	enum type of the command

	The way this module is designed, char* command should point to a
	location within the buffer used in get_command(), i.e., the
	*command parameter should be the return value of get_command()

	When validating a MOVE command, IT ONLY VALIDATES THE SYNTAX!!!
	The move.c module will validate if it's a LEGAL move or not

	Validates the SYNTAX of a command retrieved by get_command().
*/
int validate_command(char* command)
{
	// convert to lowercase for easier checking
	to_lowercase(command);
	
	// single-char commands
	if (strlen(command) == 1)
	{
		switch (command[0])
		{
		case 'r': return RESIGN;
		case 'd': return DRAW;
		case 'f': return FLIP;
		case 'q': return QUIT;
		case 'h': return HELP;
		}
	}
	// if not a single char, it must be a move command

	// validate pawn promotion piece
	if (strlen(command) == 5)
	{
		switch (command[4])
		{
		case 'n':	  // knight
		case 'b':	  // bishop
		case 'r':	  // rook
		case 'q': break;  // queen
		default: return ILLEGAL;
		}
	}

	// char* "e 2 e 4"
	// index  0 1 2 3
	int char0 = command[0] >= 'a' && command[0] <= 'h';
	int char2 = command[2] >= 'a' && command[2] <= 'h';

	int char1 = command[1] >= '1' && command[1] <= '8';
	int char3 = command[3] >= '1' && command[3] <= '8';

	if (char0 && char1 && char2 && char3)
	{
		return MOVE;
	}
	return ILLEGAL;
}

/* validate_yn()
	@str 		any string

	Checks if a string is a yes-no response. 
	Returns the appropriate macro.
*/
static int validate_yn(char* str)
{
	to_lowercase(str);

	if (!strcmp(str, "yes") || !strcmp(str, "y"))
	{
		return YES;
	}
	else if (!strcmp(str, "no") || !strcmp(str, "n"))
	{
		return NO;
	}
	return ILLEGAL;
}

/* get_yn()
	@buffer 	char array to place user's input
	@buffer_size 	max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	user's answer, YES or NO

	Gets a yes-no response from user input. Asks for input until
	valid response is given.
*/
int get_yn(char* buffer, const int buffer_size, const int turn)
{
	char* input = NULL;
	int answer;
	do
	{
		input = get_command(buffer, buffer_size, turn);
	} while ((answer = validate_yn(input)) == ILLEGAL);
	return answer;
}
