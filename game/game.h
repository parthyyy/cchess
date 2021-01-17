#ifndef GAME_H
#define GAME_H

int resign(char* buffer, const int buffer_size, const int turn);
int offer_draw(char* buffer, const int buffer_size, const int turn);
int quit(char* buffer, const int buffer_size, const int turn);
void help(void);

#endif