#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    pseudo random no.s = set of values or elements that are statistically random
    DO NOT USE FOR CRYPTOGRAPHIC SECURITY
    */

    srand(time(0));           // use current time as seed for random no.s, if not used, it gives the same no. always
    int x = rand();           // random no. between 0 - 32,767
    int y = rand() % 6;       // %6 - gives remainder of division, gives user control of range of no.s, 0-5 in this case
    int z = (rand() % 6) + 1; // +1 offsets, giving range 1-6

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    // if the random no.s are generated too close to each other, they repeat the number as enough time as not passed

    return 0;
}