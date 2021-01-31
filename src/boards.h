#ifndef BOARDS_H
#define BOARDS_H

#include <stdint.h>

struct BitBoard
{
	uint64_t pieces;
	uint64_t pawns;
	uint64_t rooks;
	uint64_t knights;
	uint64_t bishops;
	uint64_t queen;
	uint64_t king;
};

struct Attacks
{
	uint64_t pawn_attacks;
	uint64_t rook_attacks;
	uint64_t knight_attacks;
	uint64_t bishop_attacks;
	uint64_t queen_attacks;
	uint64_t king_attacks;
};

#endif