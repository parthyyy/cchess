#ifndef GAME_H
#define GAME_H

#define TITLE "\n            *********** HELP MENU ***********"
#define HEAD1 "\nCOMMAND LIST."
#define COM1  "   1. r    Resign - forfeit and give your opponent victory."
#define COM2  "   2. d    Draw   - offer a draw to your opponent."
#define COM3  "   3. f    Flip   - flip the orientation of the board."
#define COM4  "   4. q    Quit   - quit the program (not the game!)"
#define COM5  "   5. h    Help   - display this message."

#define HEAD2 "\nMOVING PIECES."
#define LINE1 "   Enter moves in long algebraic notation. Specify the starting"
#define LINE2 "   square, and then the ending square. For example: e2e4"
#define LINE3 "   For pawn promotion, specify the piece abbreviation after the"
#define LINE4 "   move. For example: d7d8q e7e8r a7a8b h7h8n"

#define HEAD3 "\nALL COMMANDS ARE CASE INSENSITIVE!"
#define DESC  "   There is no difference between any of these:"

#define EX1   "      e2e4  E2E4"
#define EX2   "      e7e8q E7E8Q"
#define EX3   "      e2E3  E2e3"
#define EX4   "      Q     q"

#define PROMPT "\nPRESS ENTER TO CONTINUE. . . "

int resign(char* buffer, const int size, const int turn);
int offer_draw(char* buffer, const int size, const int turn);
int quit(char* buffer, const int size, const int turn);
void help(void);

#endif