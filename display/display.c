/** display.c

Functions for displaying the chess board. ASCII and 
unicode supported.
Implements FLIP command: flip the board's orientation

See ./text/ for examples of printed boards.

*/

#include <stdio.h>

/* flip_board()
	@p_orient	ptr to the board's orientation

	Flips the orientation of the board.
	int orient should be set to the macro WHITE or BLACK from colors.h
*/
void flip_board(int* p_orient)
{
	*p_orient = !(*p_orient);
}

/* print_board()
	@orient 	indicates which color is printed ON TOP.
	@turn 		current turn, WHITE or BLACK
	@ascii 		print in ascii if == 1, else print in utf8

	Prints the chess board to the terminal.
	Also indicates whose turn it is.
*/

// ADD uint64_t board IF USING BITBOARDS else ADD char board[][]
void print_board(/* board, */const int orient, const int turn, const int ascii)
{

/***********************************************************************

maybe move these strings to display.h, and #define them as macros?

***********************************************************************/

	char ascii_top_bottom[] = "   +-------------------------------+\n";
	//char ascii_row[]        = "   ---------------------------------\n";

	char utf8_top_bottom[]  = "   ┌───┬───┬───┬───┬───┬───┬───┬───┐\n";

	//char utf8_row[]         = "   ├───┼───┼───┼───┼───┼───┼───┼───┤\n";

	if (orient == turn)
	{
		printf(" =>  a   b   c   d   e   f   g   h\n");
	}
	else
	{
		printf("     a   b   c   d   e   f   g   h\n");
	}

	if (ascii)
	{
		printf("%s", ascii_top_bottom);
	}
	else
	{
		printf("%s", utf8_top_bottom);
	}
}
