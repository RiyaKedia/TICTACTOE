#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "game.h"

int main() {
    int player = 1, choice;
    char mark;

    // Enable UTF-8 for emojis in Windows Command Prompt
    system("chcp 65001 >nul");

    initializeBoard();

    while(1) {
        // Clear screen for clean display
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        displayBoard();
        mark = (player % 2 != 0) ? 'X' : 'O';

        printf("Player %d, select a box number: ", (player % 2 != 0) ? 1 : 2);
        if(scanf("%d", &choice) != 1) {
            printf("\n❗ Invalid input. Enter a number 1-9.\n");
            while(getchar() != '\n'); // clear buffer
            continue;
        }

        int r = (choice - 1) / 3;
        int c = (choice - 1) % 3;

        // Validate move
        if(choice < 1 || choice > 9 || board[r][c]=='X' || board[r][c]=='O') {
            printf("\n❗ Spot taken or invalid. Try again.\n");
            continue;
        }

        board[r][c] = mark; // make the move

        // Check for winner
        if(checkWinner()) {
            // Clear screen and display final board
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            displayBoard();
            printf("\n🎉 Player %d WINS the game! 🏆\n", (player % 2 != 0) ? 1 : 2);
            break;
        }

        // Check for draw
        if(checkDraw()) {
            // Clear screen and display final board
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            displayBoard();
            printf("\n🤝 It's a Draw! \n");
            break;
        }

        player++;
    }

    return 0;
}

