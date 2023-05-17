#include "TicTacToe.h"

int main()
{
    header_msg();

    char winner = ' ';
    char response;
    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N) ");
        scanf("%*c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("\nX---X---X----X---X---X");
    printf("\nTHANK YOU FOR PLAYING!");
    printf("\nX---X---X----X---X---X");

    return 0;
}