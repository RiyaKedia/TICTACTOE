#include <stdio.h>
#include "board.h"

// The game board
char board[3][3];

// Initialize the board with numbers 1–9
void initializeBoard() {
    int k = 1;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = k++ + '0';
        }
    }
}

// Display the board
void displayBoard() {
    printf("\n\n\t✨ TIC TAC TOE ✨\n\n");
    printf("Player 1 = X   |   Player 2 = O\n\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("  %c  ", board[i][j]);
            if(j < 2) printf("|");
        }
        if(i < 2) printf("\n-----|-----|-----\n");
    }
    printf("\n");
}
