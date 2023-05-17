#include <stdio.h>
#include <ctype.h>

int main()
{
    char qns[][100] = {"1. What is x in x=2+3", "2. What is y in y=5+6", "3. What is z in z=7+7"};
    char options[][100] = {"A.3", "B.5", "C.7", "A.11", "B.15", "C.17", "A.10", "B.12", "C.14"};
    char ans[3] = {'B', 'A', 'C'};
    int no_of_qns = sizeof(qns) / sizeof(qns[0]);
    char guess;
    int score;

    printf("---QUIZ GAME---\n\n");

    for (int i = 0; i < no_of_qns; i++)
    {
        printf("%s\n", qns[i]);
        for (int j = (i * 3); j < (i * 3) + 3; j++) // there are 3 options to every qn. and all 3 have to show and in steps
        {
            printf("%s\n", options[j]);
        }

        printf("Answer (A/B/C): ");
        scanf("%c", &guess);
        scanf("%*c"); // clear \n character from input buffer

        guess = toupper(guess);
        if (guess == ans[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("Wrong :(\n");
        }
    }

    printf("\nFINAL SCORE: %d/%d\n", score, no_of_qns);

    if (score == no_of_qns)
    {
        printf("CENTUM!");
    }
    else if (score <= (no_of_qns - 1) && score >= (no_of_qns / 2) + 1)
    {
        printf("Pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}