typedef struct Piece {
	char name;
	char** legal_moves;
	// only destination squares:
	// {"e4", "e3"}
	// {"a3", "c3"}
}

/* do i need this??? */
Piece* pieces[] = malloc(16*sizeof(Piece))
// a1-h1, a2-h2, a7-h7, a8-h8
// captured pieces will point to NULL


// use pointers to Piece so i can make other arrays to access
// the exact same pieces or to find one color's pieces
// pass by reference

Piece* board[] = calloc(64*sizeof(*Square))
// empty squares will have piece ptr == NULL



print border
char* piece;
for int i = 0; i < 8; i++
    for int j = 0; j < 8; j++
        piece = board[i][j].piece;

        if (*piece == '\0')
            // separate function to handle dark/light squares
            print_blank_square(i, j);
        else
            printf("|%s", piece);

    // end of each row, close pipes
    printf("|\n");
    print border

// void print_blank_square(int i, int j)
// {
//     // example:
//     // file a = ascii 97: i
//     // rank 3 = index 3:  j
//     // dark square, i and j are odd
//     if (i%2 && j%2)
//         printf("|**")
//     else
//         printf("|  ")
// }

