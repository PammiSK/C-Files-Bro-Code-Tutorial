#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    /*
    structures (structs) are a collection of variables
    of different data types
    listed unuder 1 memory block,
    but, unlike CLASSES, have no methods (functions)
    */

    struct Player player1, player2;
    strcpy(player1.name, "Siva");
    player1.score = 14;

    strcpy(player2.name, "Kumar");
    player2.score = 7;

    printf("Name: %s ", player1.name);
    printf("Score: %d", player1.score);
    printf("\n");
    printf("Name: %s ", player2.name);
    printf("Score: %d", player2.score);

    return 0;
}