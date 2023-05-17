#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 5;
    const int MAX = 25;
    // standard convention to use CAPS for CONST variables
    int guess, guesses, ans;
    srand(time(0));                     // uses current time as seed
    ans = (rand() % (MAX - MIN)) + MIN; // generates a random no. between MIN - MAX
    // printf("%d", ans);

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > ans)
        {
            printf("Too high\n");
        }
        else if (guess < ans)
        {
            printf("Too low\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != ans);

    printf("\nIt took you %d guesses", guesses);

    return 0;
}