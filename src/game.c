/** game.c

Implements game commands that aren't covered by /board/ and /move/

Resign, draw, or quit the game.
Print a help menu.

*/

#include <stdio.h>

#include "commands.h"
#include "colors.h"
#include "game.h"

/* ARE_YOU_SURE()
	@msg 		action to confirm, e.g. "resign"
	@buffer 	char array to place user's input
	@size 		max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	user's confirmation, YES or NO

	Macro for asking for confirmation on a command.
*/
#define ARE_YOU_SURE(msg, buffer, size, turn)            \
	printf("\nAre you sure you want to %s?\n", msg); \
	return get_yn(buffer, size, turn);

/* resign()
	@buffer 	char array to place user's input
	@size 		max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	user's confirmation, YES or NO

	Resign the game. Asks for confirmation.
*/
int resign(char* buffer, const int size, const int turn)
{
	ARE_YOU_SURE("resign", buffer, size, turn);
}

/* quit()

	Quit the game. Asks for confirmation.
*/
int quit(char* buffer, const int size, const int turn)
{
	ARE_YOU_SURE("quit", buffer, size, turn);
}

/* offer_draw()

	Offer a draw. Asks for confirmation.
*/
int offer_draw(char* buffer, const int size, const int turn)
{
	int accepted;

	turn == BLACK ? printf("\nBlack") : printf("\nWhite");
	printf(" offers a draw.\n");

	printf("Do you accept?\n");
	// prompting the OPPONENT now, so use !turn
	accepted = get_yn(buffer, size, !turn);

	if (accepted)
	{
		ARE_YOU_SURE("accept", buffer, size, !turn);
	}
	return accepted; // declined
}

/* help()

	Prints a help menu. Lists every command and their
	functionality.
	Explains how you can enter them and also make moves.
	See game.h for the actual text.
*/
void help(void)
{
	// the internet says to use puts when printing variables
	// does that apply to constants? I don't wanna risk it
	puts(TITLE);

	puts(HEAD1);
	puts(COM1);
	puts(COM2);
	puts(COM3);
	puts(COM4);
	puts(COM5);

	puts(HEAD2);
	puts(LINE1);
	puts(LINE2);
	puts(LINE3);
	puts(LINE4);

	puts(HEAD3);
	puts(DESC);

	puts(EX1);
	puts(EX2);
	puts(EX3);
	puts(EX4);

	puts(PROMPT);

	getchar();
}
