/** game/test_main.c 

Tests the game.c module.

*/

#include <stdio.h>

#include "../../src/game.h"
#include "../../src/colors.h"

#define BUFFER_SIZE 1024

void test_resign(char* buffer, const int buffer_size, const int turn)
{
	if (resign(buffer, buffer_size, turn))
	{
		printf("YES. GAME OVER.\n");
	}
	else
	{
		printf("NO. RESIGNATION CANCELLED.\n");
	}
}

void test_offer_draw(char* buffer, const int buffer_size, const int turn)
{
	if (offer_draw(buffer, buffer_size, turn))
	{
		printf("GAME DRAWN.\n");
	}
	else
	{
		printf("DRAW OFFER DECLINED.\n");
	}
}

void test_quit(char* buffer, const int buffer_size, const int turn)
{
	if (quit(buffer, buffer_size, turn))
	{
		printf("PROGRAM TERMINATED.\n");
	}
	else
	{
		printf("CANCELLED.\n");
	}
}

int main(void)
{
	help();

	char buffer[BUFFER_SIZE];
	test_resign(buffer, BUFFER_SIZE, WHITE);
	test_resign(buffer, BUFFER_SIZE, BLACK);

	test_offer_draw(buffer, BUFFER_SIZE, WHITE);
	test_offer_draw(buffer, BUFFER_SIZE, BLACK);
	
	test_quit(buffer, BUFFER_SIZE, WHITE);
	test_quit(buffer, BUFFER_SIZE, BLACK);
	return 0;
}
