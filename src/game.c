/** game.c

Implements game commands that aren't covered by /board/ and /move/

Resign, draw, or quit the game.
Print a help menu.

*/

#include <stdio.h>

#include "commands.h"
#include "colors.h"
#include "game.h"

/* resign()
	@buffer 	char array to place user's input
	@size 		max num of chars to read, including '\0'
	@turn 		current turn: BLACK or WHITE

	@return 	user's confirmation, YES or NO

	Resign the game. Asks for confirmation.
*/
int resign(char* buffer, const int size, const int turn)
{
	printf("\nAre you sure you want to resign?\n");
	return get_yn(buffer, size, turn);
}

/* quit()

	Quit the game. Asks for confirmation.
	I know I'm violating DRY but I can't find a nice solution of
	condensing quit() and resign() without using even more lines
	of code.
*/
int quit(char* buffer, const int size, const int turn)
{
	printf("\nAre you sure you want to quit?\n");
	return get_yn(buffer, size, turn);
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
		printf("Are you sure?\n");
		return get_yn(buffer, size, !turn);
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
