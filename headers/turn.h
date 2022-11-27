#ifndef TURN_H
#define TURN_H

#ifndef SLEEP_FUNCTION
#define SLEEP_FUNCTION
#ifdef __WINDOWS__
#include <Windows.h>
#else
#include <unistd.h>
#endif
#endif

#include "main.h"

void start_game(char* input);
void game_loop(char* input, const int level, Player* players, Cell* all_cells);
void count_points(Player* players);
void determine_winner(char* input, Player* players);

#endif

