#include <stdio.h>

#include "board.h"
#include "../colors.h"

void print_color(int color)
{
	color == BLACK ? printf("BLACK\n") : printf("WHITE\n");
}

int main(void)
{
	int orient = WHITE;
	print_color(orient);

	flip_board(&orient);
	print_color(orient);
	return 0;
}
