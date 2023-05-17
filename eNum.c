#include <stdio.h>

enum Day
{
    sun = 1,
    mon = 2,
    tue = 3,
    wed = 4,
    thu = 5,
    fri = 6,
    sat = 7
};

int main()
{
    /*
    enum (enumeration) - user defined type of named integer identifiers, makes program more readable
    enum are constants
    */

    enum Day today = sun;
    printf("%d", today); // shows associated int value

    if (today == sun || today == sat) // same as if (today == 1 || today == 7)
    {
        printf("\nWEEKEND!");
    }
    else
    {
        printf("\nWeekday :(");
    }

    return 0;
}