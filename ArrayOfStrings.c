#include <stdio.h>
#include <string.h>

int main()
{
    // array of strings is 2d array of characters
    char cars[][10] = {"Audi", "BMW", "VW"};
    // cannot change values directly
    // cars[0]="Tesla";
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}