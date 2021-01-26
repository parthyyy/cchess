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
	I know I'm violating DRY but I can't find a nice solution of
	condensing quit() and resign() without using more lines of code.
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

	turn == BLACK ? printf("\nBlack") : printf("\nWhite");
	printf(" offers a draw.\n");

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
	// I used puts() to make the line length shorter
	puts("\n                 ********* HELP MENU *********");
	puts("\nCOMMAND LIST.");
	puts("   1. r    Resign - forfeit and give your opponent victory.");
	puts("   2. d    Draw   - offer a draw to your opponent.");
	puts("   3. f    Flip   - flip the orientation of the board.");
	puts("   4. q    Quit   - quit the program (not the game!)");
	puts("   5. h    Help   - display this message.");

	puts("\nMOVING PIECES.");
	puts("   Enter moves in long algebraic notation. Specify the starting");
	puts("   square, and then the ending square. For example: e2e4");
	puts("   For pawn promotion, specify the piece abbreviation after the");
	puts("   move. For example: d7d8q e7e8r a7a8b h7h8n");

	puts("\nALL COMMANDS ARE CASE INSENSITIVE!");
	puts("   There is no difference between any of these:");

	puts("      e2e4  E2E4");
	puts("      e7e8q E7E8Q");
	puts("      e2E3  E2e3");
	puts("      Q     q");

	puts("\nPRESS ENTER TO CONTINUE. . . ");
	getchar();
}
