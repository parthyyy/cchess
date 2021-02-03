#include <stdio.h>
#include <stdlib.h>

int verify_rook_move(char* move)
{
	// letter = file, num = rank
	int same_file = move[0] == move[2];
	int same_rank = move[1] == move[3];
	return same_file ^ same_rank;
}

int verify_bishop_move(char* move)
{
	int file_diff = abs(move[2] - move[0]);
	int rank_diff = abs(move[3] - move[1]);
	return file_diff == rank_diff;
}

int verify_queen_move(char* move)
{
	return verify_bishop_move(move) ^ verify_rook_move(move);
}

void queen(void)
{
if (verify_queen_move("c2a1")) { printf("c2a1\n"); }
if (verify_queen_move("c2a2")) { printf("c2a2\n"); }
if (verify_queen_move("c2a3")) { printf("c2a3\n"); }
if (verify_queen_move("c2a4")) { printf("c2a4\n"); }
if (verify_queen_move("c2a5")) { printf("c2a5\n"); }
if (verify_queen_move("c2a6")) { printf("c2a6\n"); }
if (verify_queen_move("c2a7")) { printf("c2a7\n"); }
if (verify_queen_move("c2a8")) { printf("c2a8\n"); }
if (verify_queen_move("c2b1")) { printf("c2b1\n"); }
if (verify_queen_move("c2b2")) { printf("c2b2\n"); }
if (verify_queen_move("c2b3")) { printf("c2b3\n"); }
if (verify_queen_move("c2b4")) { printf("c2b4\n"); }
if (verify_queen_move("c2b5")) { printf("c2b5\n"); }
if (verify_queen_move("c2b6")) { printf("c2b6\n"); }
if (verify_queen_move("c2b7")) { printf("c2b7\n"); }
if (verify_queen_move("c2b8")) { printf("c2b8\n"); }
if (verify_queen_move("c2c1")) { printf("c2c1\n"); }
if (verify_queen_move("c2c3")) { printf("c2c3\n"); }
if (verify_queen_move("c2c4")) { printf("c2c4\n"); }
if (verify_queen_move("c2c5")) { printf("c2c5\n"); }
if (verify_queen_move("c2c6")) { printf("c2c6\n"); }
if (verify_queen_move("c2c7")) { printf("c2c7\n"); }
if (verify_queen_move("c2c8")) { printf("c2c8\n"); }
if (verify_queen_move("c2d1")) { printf("c2d1\n"); }
if (verify_queen_move("c2d2")) { printf("c2d2\n"); }
if (verify_queen_move("c2d3")) { printf("c2d3\n"); }
if (verify_queen_move("c2d4")) { printf("c2d4\n"); }
if (verify_queen_move("c2d5")) { printf("c2d5\n"); }
if (verify_queen_move("c2d6")) { printf("c2d6\n"); }
if (verify_queen_move("c2d7")) { printf("c2d7\n"); }
if (verify_queen_move("c2d8")) { printf("c2d8\n"); }
if (verify_queen_move("c2e1")) { printf("c2e1\n"); }
if (verify_queen_move("c2e2")) { printf("c2e2\n"); }
if (verify_queen_move("c2e3")) { printf("c2e3\n"); }
if (verify_queen_move("c2e4")) { printf("c2e4\n"); }
if (verify_queen_move("c2e5")) { printf("c2e5\n"); }
if (verify_queen_move("c2e6")) { printf("c2e6\n"); }
if (verify_queen_move("c2e7")) { printf("c2e7\n"); }
if (verify_queen_move("c2e8")) { printf("c2e8\n"); }
if (verify_queen_move("c2f1")) { printf("c2f1\n"); }
if (verify_queen_move("c2f2")) { printf("c2f2\n"); }
if (verify_queen_move("c2f3")) { printf("c2f3\n"); }
if (verify_queen_move("c2f4")) { printf("c2f4\n"); }
if (verify_queen_move("c2f5")) { printf("c2f5\n"); }
if (verify_queen_move("c2f6")) { printf("c2f6\n"); }
if (verify_queen_move("c2f7")) { printf("c2f7\n"); }
if (verify_queen_move("c2f8")) { printf("c2f8\n"); }
if (verify_queen_move("c2g1")) { printf("c2g1\n"); }
if (verify_queen_move("c2g2")) { printf("c2g2\n"); }
if (verify_queen_move("c2g3")) { printf("c2g3\n"); }
if (verify_queen_move("c2g4")) { printf("c2g4\n"); }
if (verify_queen_move("c2g5")) { printf("c2g5\n"); }
if (verify_queen_move("c2g6")) { printf("c2g6\n"); }
if (verify_queen_move("c2g7")) { printf("c2g7\n"); }
if (verify_queen_move("c2g8")) { printf("c2g8\n"); }
if (verify_queen_move("c2h1")) { printf("c2h1\n"); }
if (verify_queen_move("c2h2")) { printf("c2h2\n"); }
if (verify_queen_move("c2h3")) { printf("c2h3\n"); }
if (verify_queen_move("c2h4")) { printf("c2h4\n"); }
if (verify_queen_move("c2h5")) { printf("c2h5\n"); }
if (verify_queen_move("c2h6")) { printf("c2h6\n"); }
if (verify_queen_move("c2h7")) { printf("c2h7\n"); }
if (verify_queen_move("c2h8")) { printf("c2h8\n"); }
}

void queen2(void)
{
if (verify_queen_move("g8a1")) {printf("g8a1\n");}
if (verify_queen_move("g8a2")) {printf("g8a2\n");}
if (verify_queen_move("g8a3")) {printf("g8a3\n");}
if (verify_queen_move("g8a4")) {printf("g8a4\n");}
if (verify_queen_move("g8a5")) {printf("g8a5\n");}
if (verify_queen_move("g8a6")) {printf("g8a6\n");}
if (verify_queen_move("g8a7")) {printf("g8a7\n");}
if (verify_queen_move("g8a8")) {printf("g8a8\n");}
if (verify_queen_move("g8b1")) {printf("g8b1\n");}
if (verify_queen_move("g8b2")) {printf("g8b2\n");}
if (verify_queen_move("g8b3")) {printf("g8b3\n");}
if (verify_queen_move("g8b4")) {printf("g8b4\n");}
if (verify_queen_move("g8b5")) {printf("g8b5\n");}
if (verify_queen_move("g8b6")) {printf("g8b6\n");}
if (verify_queen_move("g8b7")) {printf("g8b7\n");}
if (verify_queen_move("g8b8")) {printf("g8b8\n");}
if (verify_queen_move("g8c1")) {printf("g8c1\n");}
if (verify_queen_move("g8c2")) {printf("g8c2\n");}
if (verify_queen_move("g8c3")) {printf("g8c3\n");}
if (verify_queen_move("g8c4")) {printf("g8c4\n");}
if (verify_queen_move("g8c5")) {printf("g8c5\n");}
if (verify_queen_move("g8c6")) {printf("g8c6\n");}
if (verify_queen_move("g8c7")) {printf("g8c7\n");}
if (verify_queen_move("g8c8")) {printf("g8c8\n");}
if (verify_queen_move("g8d1")) {printf("g8d1\n");}
if (verify_queen_move("g8d2")) {printf("g8d2\n");}
if (verify_queen_move("g8d3")) {printf("g8d3\n");}
if (verify_queen_move("g8d4")) {printf("g8d4\n");}
if (verify_queen_move("g8d5")) {printf("g8d5\n");}
if (verify_queen_move("g8d6")) {printf("g8d6\n");}
if (verify_queen_move("g8d7")) {printf("g8d7\n");}
if (verify_queen_move("g8d8")) {printf("g8d8\n");}
if (verify_queen_move("g8e1")) {printf("g8e1\n");}
if (verify_queen_move("g8e2")) {printf("g8e2\n");}
if (verify_queen_move("g8e3")) {printf("g8e3\n");}
if (verify_queen_move("g8e4")) {printf("g8e4\n");}
if (verify_queen_move("g8e5")) {printf("g8e5\n");}
if (verify_queen_move("g8e6")) {printf("g8e6\n");}
if (verify_queen_move("g8e7")) {printf("g8e7\n");}
if (verify_queen_move("g8e8")) {printf("g8e8\n");}
if (verify_queen_move("g8f1")) {printf("g8f1\n");}
if (verify_queen_move("g8f2")) {printf("g8f2\n");}
if (verify_queen_move("g8f3")) {printf("g8f3\n");}
if (verify_queen_move("g8f4")) {printf("g8f4\n");}
if (verify_queen_move("g8f5")) {printf("g8f5\n");}
if (verify_queen_move("g8f6")) {printf("g8f6\n");}
if (verify_queen_move("g8f7")) {printf("g8f7\n");}
if (verify_queen_move("g8f8")) {printf("g8f8\n");}
if (verify_queen_move("g8g1")) {printf("g8g1\n");}
if (verify_queen_move("g8g2")) {printf("g8g2\n");}
if (verify_queen_move("g8g3")) {printf("g8g3\n");}
if (verify_queen_move("g8g4")) {printf("g8g4\n");}
if (verify_queen_move("g8g5")) {printf("g8g5\n");}
if (verify_queen_move("g8g6")) {printf("g8g6\n");}
if (verify_queen_move("g8g7")) {printf("g8g7\n");}
if (verify_queen_move("g8h1")) {printf("g8h1\n");}
if (verify_queen_move("g8h2")) {printf("g8h2\n");}
if (verify_queen_move("g8h3")) {printf("g8h3\n");}
if (verify_queen_move("g8h4")) {printf("g8h4\n");}
if (verify_queen_move("g8h5")) {printf("g8h5\n");}
if (verify_queen_move("g8h6")) {printf("g8h6\n");}
if (verify_queen_move("g8h7")) {printf("g8h7\n");}
if (verify_queen_move("g8h8")) {printf("g8h8\n");}
}

void rook(void)
{
if (verify_rook_move("c2a1")) { printf("c2a1\n"); }
if (verify_rook_move("c2a2")) { printf("c2a2\n"); }
if (verify_rook_move("c2a3")) { printf("c2a3\n"); }
if (verify_rook_move("c2a4")) { printf("c2a4\n"); }
if (verify_rook_move("c2a5")) { printf("c2a5\n"); }
if (verify_rook_move("c2a6")) { printf("c2a6\n"); }
if (verify_rook_move("c2a7")) { printf("c2a7\n"); }
if (verify_rook_move("c2a8")) { printf("c2a8\n"); }
if (verify_rook_move("c2b1")) { printf("c2b1\n"); }
if (verify_rook_move("c2b2")) { printf("c2b2\n"); }
if (verify_rook_move("c2b3")) { printf("c2b3\n"); }
if (verify_rook_move("c2b4")) { printf("c2b4\n"); }
if (verify_rook_move("c2b5")) { printf("c2b5\n"); }
if (verify_rook_move("c2b6")) { printf("c2b6\n"); }
if (verify_rook_move("c2b7")) { printf("c2b7\n"); }
if (verify_rook_move("c2b8")) { printf("c2b8\n"); }
if (verify_rook_move("c2c1")) { printf("c2c1\n"); }
if (verify_rook_move("c2c3")) { printf("c2c3\n"); }
if (verify_rook_move("c2c4")) { printf("c2c4\n"); }
if (verify_rook_move("c2c5")) { printf("c2c5\n"); }
if (verify_rook_move("c2c6")) { printf("c2c6\n"); }
if (verify_rook_move("c2c7")) { printf("c2c7\n"); }
if (verify_rook_move("c2c8")) { printf("c2c8\n"); }
if (verify_rook_move("c2d1")) { printf("c2d1\n"); }
if (verify_rook_move("c2d2")) { printf("c2d2\n"); }
if (verify_rook_move("c2d3")) { printf("c2d3\n"); }
if (verify_rook_move("c2d4")) { printf("c2d4\n"); }
if (verify_rook_move("c2d5")) { printf("c2d5\n"); }
if (verify_rook_move("c2d6")) { printf("c2d6\n"); }
if (verify_rook_move("c2d7")) { printf("c2d7\n"); }
if (verify_rook_move("c2d8")) { printf("c2d8\n"); }
if (verify_rook_move("c2e1")) { printf("c2e1\n"); }
if (verify_rook_move("c2e2")) { printf("c2e2\n"); }
if (verify_rook_move("c2e3")) { printf("c2e3\n"); }
if (verify_rook_move("c2e4")) { printf("c2e4\n"); }
if (verify_rook_move("c2e5")) { printf("c2e5\n"); }
if (verify_rook_move("c2e6")) { printf("c2e6\n"); }
if (verify_rook_move("c2e7")) { printf("c2e7\n"); }
if (verify_rook_move("c2e8")) { printf("c2e8\n"); }
if (verify_rook_move("c2f1")) { printf("c2f1\n"); }
if (verify_rook_move("c2f2")) { printf("c2f2\n"); }
if (verify_rook_move("c2f3")) { printf("c2f3\n"); }
if (verify_rook_move("c2f4")) { printf("c2f4\n"); }
if (verify_rook_move("c2f5")) { printf("c2f5\n"); }
if (verify_rook_move("c2f6")) { printf("c2f6\n"); }
if (verify_rook_move("c2f7")) { printf("c2f7\n"); }
if (verify_rook_move("c2f8")) { printf("c2f8\n"); }
if (verify_rook_move("c2g1")) { printf("c2g1\n"); }
if (verify_rook_move("c2g2")) { printf("c2g2\n"); }
if (verify_rook_move("c2g3")) { printf("c2g3\n"); }
if (verify_rook_move("c2g4")) { printf("c2g4\n"); }
if (verify_rook_move("c2g5")) { printf("c2g5\n"); }
if (verify_rook_move("c2g6")) { printf("c2g6\n"); }
if (verify_rook_move("c2g7")) { printf("c2g7\n"); }
if (verify_rook_move("c2g8")) { printf("c2g8\n"); }
if (verify_rook_move("c2h1")) { printf("c2h1\n"); }
if (verify_rook_move("c2h2")) { printf("c2h2\n"); }
if (verify_rook_move("c2h3")) { printf("c2h3\n"); }
if (verify_rook_move("c2h4")) { printf("c2h4\n"); }
if (verify_rook_move("c2h5")) { printf("c2h5\n"); }
if (verify_rook_move("c2h6")) { printf("c2h6\n"); }
if (verify_rook_move("c2h7")) { printf("c2h7\n"); }
if (verify_rook_move("c2h8")) { printf("c2h8\n"); }
}

void rook2(void)
{
if (verify_rook_move("h4a1")) { printf("h4a1\n"); }
if (verify_rook_move("h4a2")) { printf("h4a2\n"); }
if (verify_rook_move("h4a3")) { printf("h4a3\n"); }
if (verify_rook_move("h4a4")) { printf("h4a4\n"); }
if (verify_rook_move("h4a5")) { printf("h4a5\n"); }
if (verify_rook_move("h4a6")) { printf("h4a6\n"); }
if (verify_rook_move("h4a7")) { printf("h4a7\n"); }
if (verify_rook_move("h4a8")) { printf("h4a8\n"); }
if (verify_rook_move("h4b1")) { printf("h4b1\n"); }
if (verify_rook_move("h4b2")) { printf("h4b2\n"); }
if (verify_rook_move("h4b3")) { printf("h4b3\n"); }
if (verify_rook_move("h4b4")) { printf("h4b4\n"); }
if (verify_rook_move("h4b5")) { printf("h4b5\n"); }
if (verify_rook_move("h4b6")) { printf("h4b6\n"); }
if (verify_rook_move("h4b7")) { printf("h4b7\n"); }
if (verify_rook_move("h4b8")) { printf("h4b8\n"); }
if (verify_rook_move("h4c1")) { printf("h4c1\n"); }
if (verify_rook_move("h4c2")) { printf("h4c2\n"); }
if (verify_rook_move("h4c3")) { printf("h4c3\n"); }
if (verify_rook_move("h4c4")) { printf("h4c4\n"); }
if (verify_rook_move("h4c5")) { printf("h4c5\n"); }
if (verify_rook_move("h4c6")) { printf("h4c6\n"); }
if (verify_rook_move("h4c7")) { printf("h4c7\n"); }
if (verify_rook_move("h4c8")) { printf("h4c8\n"); }
if (verify_rook_move("h4d1")) { printf("h4d1\n"); }
if (verify_rook_move("h4d2")) { printf("h4d2\n"); }
if (verify_rook_move("h4d3")) { printf("h4d3\n"); }
if (verify_rook_move("h4d4")) { printf("h4d4\n"); }
if (verify_rook_move("h4d5")) { printf("h4d5\n"); }
if (verify_rook_move("h4d6")) { printf("h4d6\n"); }
if (verify_rook_move("h4d7")) { printf("h4d7\n"); }
if (verify_rook_move("h4d8")) { printf("h4d8\n"); }
if (verify_rook_move("h4e1")) { printf("h4e1\n"); }
if (verify_rook_move("h4e2")) { printf("h4e2\n"); }
if (verify_rook_move("h4e3")) { printf("h4e3\n"); }
if (verify_rook_move("h4e4")) { printf("h4e4\n"); }
if (verify_rook_move("h4e5")) { printf("h4e5\n"); }
if (verify_rook_move("h4e6")) { printf("h4e6\n"); }
if (verify_rook_move("h4e7")) { printf("h4e7\n"); }
if (verify_rook_move("h4e8")) { printf("h4e8\n"); }
if (verify_rook_move("h4f1")) { printf("h4f1\n"); }
if (verify_rook_move("h4f2")) { printf("h4f2\n"); }
if (verify_rook_move("h4f3")) { printf("h4f3\n"); }
if (verify_rook_move("h4f4")) { printf("h4f4\n"); }
if (verify_rook_move("h4f5")) { printf("h4f5\n"); }
if (verify_rook_move("h4f6")) { printf("h4f6\n"); }
if (verify_rook_move("h4f7")) { printf("h4f7\n"); }
if (verify_rook_move("h4f8")) { printf("h4f8\n"); }
if (verify_rook_move("h4g1")) { printf("h4g1\n"); }
if (verify_rook_move("h4g2")) { printf("h4g2\n"); }
if (verify_rook_move("h4g3")) { printf("h4g3\n"); }
if (verify_rook_move("h4g4")) { printf("h4g4\n"); }
if (verify_rook_move("h4g5")) { printf("h4g5\n"); }
if (verify_rook_move("h4g6")) { printf("h4g6\n"); }
if (verify_rook_move("h4g7")) { printf("h4g7\n"); }
if (verify_rook_move("h4g8")) { printf("h4g8\n"); }
if (verify_rook_move("h4h1")) { printf("h4h1\n"); }
if (verify_rook_move("h4h2")) { printf("h4h2\n"); }
if (verify_rook_move("h4h3")) { printf("h4h3\n"); }
if (verify_rook_move("h4h5")) { printf("h4h5\n"); }
if (verify_rook_move("h4h6")) { printf("h4h6\n"); }
if (verify_rook_move("h4h7")) { printf("h4h7\n"); }
if (verify_rook_move("h4h8")) { printf("h4h8\n"); }
}

void bishop(void)
{
if (verify_bishop_move("f2a1")) {printf("f2a1\n");}
if (verify_bishop_move("f2a2")) {printf("f2a2\n");}
if (verify_bishop_move("f2a3")) {printf("f2a3\n");}
if (verify_bishop_move("f2a4")) {printf("f2a4\n");}
if (verify_bishop_move("f2a5")) {printf("f2a5\n");}
if (verify_bishop_move("f2a6")) {printf("f2a6\n");}
if (verify_bishop_move("f2a7")) {printf("f2a7\n");}
if (verify_bishop_move("f2a8")) {printf("f2a8\n");}
if (verify_bishop_move("f2b1")) {printf("f2b1\n");}
if (verify_bishop_move("f2b2")) {printf("f2b2\n");}
if (verify_bishop_move("f2b3")) {printf("f2b3\n");}
if (verify_bishop_move("f2b4")) {printf("f2b4\n");}
if (verify_bishop_move("f2b5")) {printf("f2b5\n");}
if (verify_bishop_move("f2b6")) {printf("f2b6\n");}
if (verify_bishop_move("f2b7")) {printf("f2b7\n");}
if (verify_bishop_move("f2b8")) {printf("f2b8\n");}
if (verify_bishop_move("f2c1")) {printf("f2c1\n");}
if (verify_bishop_move("f2c2")) {printf("f2c2\n");}
if (verify_bishop_move("f2c3")) {printf("f2c3\n");}
if (verify_bishop_move("f2c4")) {printf("f2c4\n");}
if (verify_bishop_move("f2c5")) {printf("f2c5\n");}
if (verify_bishop_move("f2c6")) {printf("f2c6\n");}
if (verify_bishop_move("f2c7")) {printf("f2c7\n");}
if (verify_bishop_move("f2c8")) {printf("f2c8\n");}
if (verify_bishop_move("f2d1")) {printf("f2d1\n");}
if (verify_bishop_move("f2d2")) {printf("f2d2\n");}
if (verify_bishop_move("f2d3")) {printf("f2d3\n");}
if (verify_bishop_move("f2d4")) {printf("f2d4\n");}
if (verify_bishop_move("f2d5")) {printf("f2d5\n");}
if (verify_bishop_move("f2d6")) {printf("f2d6\n");}
if (verify_bishop_move("f2d7")) {printf("f2d7\n");}
if (verify_bishop_move("f2d8")) {printf("f2d8\n");}
if (verify_bishop_move("f2e1")) {printf("f2e1\n");}
if (verify_bishop_move("f2e2")) {printf("f2e2\n");}
if (verify_bishop_move("f2e3")) {printf("f2e3\n");}
if (verify_bishop_move("f2e4")) {printf("f2e4\n");}
if (verify_bishop_move("f2e5")) {printf("f2e5\n");}
if (verify_bishop_move("f2e6")) {printf("f2e6\n");}
if (verify_bishop_move("f2e7")) {printf("f2e7\n");}
if (verify_bishop_move("f2e8")) {printf("f2e8\n");}
if (verify_bishop_move("f2f1")) {printf("f2f1\n");}
if (verify_bishop_move("f2f3")) {printf("f2f3\n");}
if (verify_bishop_move("f2f4")) {printf("f2f4\n");}
if (verify_bishop_move("f2f5")) {printf("f2f5\n");}
if (verify_bishop_move("f2f6")) {printf("f2f6\n");}
if (verify_bishop_move("f2f7")) {printf("f2f7\n");}
if (verify_bishop_move("f2f8")) {printf("f2f8\n");}
if (verify_bishop_move("f2g1")) {printf("f2g1\n");}
if (verify_bishop_move("f2g2")) {printf("f2g2\n");}
if (verify_bishop_move("f2g3")) {printf("f2g3\n");}
if (verify_bishop_move("f2g4")) {printf("f2g4\n");}
if (verify_bishop_move("f2g5")) {printf("f2g5\n");}
if (verify_bishop_move("f2g6")) {printf("f2g6\n");}
if (verify_bishop_move("f2g7")) {printf("f2g7\n");}
if (verify_bishop_move("f2g8")) {printf("f2g8\n");}
if (verify_bishop_move("f2h1")) {printf("f2h1\n");}
if (verify_bishop_move("f2h2")) {printf("f2h2\n");}
if (verify_bishop_move("f2h3")) {printf("f2h3\n");}
if (verify_bishop_move("f2h4")) {printf("f2h4\n");}
if (verify_bishop_move("f2h5")) {printf("f2h5\n");}
if (verify_bishop_move("f2h6")) {printf("f2h6\n");}
if (verify_bishop_move("f2h7")) {printf("f2h7\n");}
if (verify_bishop_move("f2h8")) {printf("f2h8\n");}
}
