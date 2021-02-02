#ifndef BOARDS_H
#define BOARDS_H

#define ROWS 8
#define COLS 8
#define RANKS 8
#define FILES 8

#include <stdint.h>

enum BOARDS
{
	PAWNS,
	KNIGHTS,
	BISHOPS,
	ROOKS,
	QUEENS,
	KING,
	PIECES,
	TOTAL_BB
};

/* Piece locations */
struct BitBoards
{
	uint64_t bitboards[TOTAL_BB];

	// for verifying castling rights
	int king_moved;
	int rook_a_moved;
	int rook_h_moved;
};

/* Pseudo-legal attacks -- don't know if they leave king in check */
struct Attacks
{
	uint64_t attacks[TOTAL_BB-1];
	// minus 1 because no attack bitboard for PIECES
};

/* Everything */
struct Board
{
	char pretty_board[8][8]; // board for easy printing

	struct BitBoards bb_white;
	struct BitBoards bb_black;

	struct Attacks att_white;
	struct Attacks att_black;

	int en_passant_sq; // bit index of square (0-63)
	int in_check;
};

#endif