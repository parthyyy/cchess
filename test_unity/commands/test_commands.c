#include "../../src/commands.h"
#include "../../unity/unity.h"

void setUp(void) {}
void tearDown(void) {}

/* Sorry Unity devs, but I don't use camelCase. */

void test_legal_moves(void)
{
	// should always return MOVE
	TEST_ASSERT_EQUAL(MOVE, validate_command("e2e4"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7e5"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a1a7"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e8g2"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e1g1"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("c3b6"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e5f6"));
}

void test_illegal_moves(void)
{
	// should always return ILLEGAL
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a1a1"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a9a9"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("e8e9"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a1h9"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a9a1"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("ksdjf"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("z8z8"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("z6j8"));

	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a1a1q"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a9a9q"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("e8e9q"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a1h9b"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("a9a1b"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("z8z8n"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("z6j8r"));
}

void test_pawn_promotion(void)
{
	// should always return MOVE
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7a8q"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7a8r"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7a8b"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7a8n"));

	TEST_ASSERT_EQUAL(MOVE, validate_command("a7b8q"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7b8r"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7b8b"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("a7b8n"));

	TEST_ASSERT_EQUAL(MOVE, validate_command("e7d8q"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7d8r"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7d8b"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7d8n"));

	TEST_ASSERT_EQUAL(MOVE, validate_command("e7e8q"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7e8r"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7e8b"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7e8n"));

	TEST_ASSERT_EQUAL(MOVE, validate_command("e7f8q"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7f8r"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7f8b"));
	TEST_ASSERT_EQUAL(MOVE, validate_command("e7f8n"));
}

void test_legal_commands(void)
{
	// should always return one of the command enums
	TEST_ASSERT_EQUAL(RESIGN, validate_command("r"));
	TEST_ASSERT_EQUAL(DRAW, validate_command("d"));
	TEST_ASSERT_EQUAL(FLIP, validate_command("f"));
	TEST_ASSERT_EQUAL(HELP, validate_command("h"));
	TEST_ASSERT_EQUAL(QUIT, validate_command("q"));

	TEST_ASSERT_EQUAL(RESIGN, validate_command("R"));
	TEST_ASSERT_EQUAL(DRAW, validate_command("D"));
	TEST_ASSERT_EQUAL(FLIP, validate_command("F"));
	TEST_ASSERT_EQUAL(HELP, validate_command("H"));
	TEST_ASSERT_EQUAL(QUIT, validate_command("Q"));
}

void test_illegal_commands(void)
{
	// should always return ILLEGAL
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("win"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("free checkmate"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("cheats"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("gcc -Wall -Werror -Wextra -g main.c -o main"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("ksdjbf"));

	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("uzi hitman is a really good singer and you should check out his music"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("^^^ seriously tho you should"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("123456"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command(""));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("I LOOOOOVE CHESS!!! :))))"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("i hate chess :( wahhhh"));

	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("rr"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("dd"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("ff"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("hh"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("qq"));

	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("RR"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("DD"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("FF"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("HH"));
	TEST_ASSERT_EQUAL(ILLEGAL, validate_command("QQ"));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_legal_moves);
	RUN_TEST(test_illegal_moves);
	RUN_TEST(test_pawn_promotion);
	RUN_TEST(test_legal_commands);
	RUN_TEST(test_illegal_commands);
	return UNITY_END();
}
