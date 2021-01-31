#include <stdio.h>
#include <string.h>

int main(void)
{
	char* resign = "resign";
	char* draw = "draw";
	char* flip = "flip";
	char* quit = "quit";
	char* help = "help";

	char* cmp = "compare";
	int result = strcmp(resign, cmp);
	printf("resign %i\n", result);

	result = strcmp(draw, cmp);
	printf("draw %i\n", result);

	result = strcmp(flip, cmp);
	printf("flip %i\n", result);

	result = strcmp(quit, cmp);
	printf("quit %i\n", result);

	result = strcmp(help, cmp);
	printf("help %i\n", result);

	return 0;
}
