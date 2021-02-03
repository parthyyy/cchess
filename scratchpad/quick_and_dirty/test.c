/** test.c

Skeleton C code with all the necessary boilerplate.

I used this for quick and dirty testing of things
like truth values, random bursts of ideas, or
trying some pseudocode in real but basic code.

*/

#include <stdio.h>

#include "funcs.h"

int main(void)
{
	printf("**********c2 queen*********\n");
	queen();
	printf("\n\n");

	printf("**********g8 queen*********\n");
	queen2();
	printf("\n\n");

	printf("**********c2 rook*********\n");
	rook();
	printf("\n\n");

	printf("**********h4 rook*********\n");
	rook2();
	printf("\n\n");

	printf("**********f2 bishop*********\n");
	bishop();


	// char* resign = "resign";
	// char* draw = "draw";
	// char* flip = "flip";
	// char* quit = "quit";
	// char* help = "help";

	// char* cmp = "compare";
	// int result = strcmp(resign, cmp);
	// printf("resign %i\n", result);

	// result = strcmp(draw, cmp);
	// printf("draw %i\n", result);

	// result = strcmp(flip, cmp);
	// printf("flip %i\n", result);

	// result = strcmp(quit, cmp);
	// printf("quit %i\n", result);

	// result = strcmp(help, cmp);
	// printf("help %i\n", result);

	// printf("%i\n", !1);
	// printf("%i\n", !0 ^ 0);
	// printf("%i\n", !4 ^ 1);

	return 0;
}
