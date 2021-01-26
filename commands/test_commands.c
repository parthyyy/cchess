/** commands/test_main.c

TESTS FOR THE commands.c MODULE

*/

#include <stdio.h>

#include "commands.h"
#include "../colors.h"

#define BUFFER_SIZE 1024

int main(void)
{
	int turn = WHITE;
	char buffer[BUFFER_SIZE];

	char* command = NULL;
	int type;

	/* TESTING get_yn() FUNCTION */
	printf("yes or no?\n");

	int yes_no = get_yn(buffer, BUFFER_SIZE, turn);
	if (yes_no == NO)
	{
		printf("%i NO\n", yes_no);
	}
	else
	{
		printf("%i YES\n", yes_no);
	}

	while (1)
	{
		/* TESTING COMMAND FUNCTIONS*/
		command = get_command(buffer, BUFFER_SIZE, turn);
		type = validate_command(command);

		switch (type)
		{
		case RESIGN:
			printf("\n%i resign\n", type);
			break;
		case DRAW:
			printf("\n%i offer draw\n", type);
			break;
		case FLIP:
			printf("\n%i flip\n", type);
			break;
		case QUIT:
			printf("\n%i quit\n", type);
			return 0;
		case HELP:
			printf("\n%i help\n", type);
			break;
		case MOVE:
			printf("\n%i move\n", type);
			break;
		case ILLEGAL:
			printf("\n%i illegal\n", type);
			break;
		}
		turn = !turn;
	}
	return 0;
}
