#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

// Structure used for the board game.

typedef struct aBoardSlot {
    int pos;
    int potential;
    struct aBoardSlot * next;
    struct aBoardSlot * prev;
}game;

// Functions used to simulate the game. All functions have appropriate comments explaining them.

void createBoard(game ** head, game ** tail, int snake[5], int ladder[5]);

void printBoard(game * head);

void printBoardRev(game * tail);

int retPotentail(game * tail, int die, int playerPos);

void freeBoard(game * head);