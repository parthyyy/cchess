/** game.c

Implements game commands that aren't covered by /board/ and /move/

Resign, draw, or quit the game.
Print a help menu.

*/

#include <stdio.h>

#include "../commands/commands.h"
#include "../colors.h"

/* resign()
	@buffer 	char array to place user's input
	@buffer_size 	max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	user's confirmation, YES or NO

	Resign the game. Asks for confirmation.
*/
int resign(char* buffer, const int buffer_size, const int turn)
{
	printf("\nAre you sure you want to resign?\n");
	return get_yn(buffer, buffer_size, turn);
}

/* quit()

	Quit the game. Asks for confirmation.
*/
int quit(char* buffer, const int buffer_size, const int turn)
{
	printf("\nAre you sure you want to quit?\n");
	return get_yn(buffer, buffer_size, turn);
}

/* offer_draw()

	Offer a draw. Asks for confirmation.
*/
int offer_draw(char* buffer, const int buffer_size, const int turn)
{
	int accepted;
	if (turn == BLACK)
	{
		printf("\nBlack offers a draw.\n");
	}
	else
	{
		printf("\nWhite offers a draw.\n");
	}

	// prompting the OPPONENT now, so use !turn
	printf("Do you accept?\n");
	accepted = get_yn(buffer, buffer_size, !turn);

	if (accepted)
	{
		printf("Are you sure?\n");
		return get_yn(buffer, buffer_size, !turn);
	}
	return accepted; // declined
}

/* help()

	Prints a help menu. Lists every command and their functionality.
	Explains how you can enter them and also make moves.
*/
void help(void)
{
	printf("\n                         ********* HELP MENU *********\n");
	printf("\nCOMMAND LIST.\n");
	printf("    1. r        Resign - forfeit and give your opponent victory.\n");
	printf("    2. d        Draw   - offer a draw to your opponent.\n");
	printf("    3. f        Flip   - flip the orientation of the board.\n");
	printf("    4. q        Quit   - quit the program (not the game!)\n");
	printf("    5. h        Help   - display this message.\n");

	printf("\nMOVING PIECES.\n");
	printf("    Enter moves in long algebraic notation. Specify the starting\n");
	printf("    square, and then the ending square. For example: e2e4\n");
	printf("    For pawn promotion, specify the piece abbreviation after the\n");
	printf("    move. For example: d7d8q e7e8r a7a8b h7h8n\n");

	printf("\nALL COMMANDS ARE CASE INSENSITIVE!\n");
	printf("    There is no difference between any of these:\n");

	printf("        e2e4  E2E4\n");
	printf("        e7e8q E7E8Q\n");
	printf("        e2E3  E2e3\n");
	printf("        Q     q\n");

	printf("\nPRESS ENTER TO CONTINUE. . . ");
	getchar();
}
