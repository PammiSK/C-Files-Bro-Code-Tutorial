#include <stdio.h>
#include <string.h>

int main()
{
    // character swap, also can be used for no.s
    char x = 'X';
    char y = 'Y';
    printf("CHAR swap:\n");
    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // use temporary / 3rd vaiable to swap
    char temp;

    temp = x; // copy x to temp
    x = y;    // copy y to x
    y = temp; // copy temp to y
    printf("Swapped:\n");
    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // string swap
    char x2[] = "water";
    char y2[] = "lemonade";
    char temp2[15];

    printf("STRING swap:\n");
    printf("x2 = %s\n", x2);
    printf("y2 = %s\n", y2);

    // cannot achieve saem result by reassigning, use strcpy
    strcpy(temp2, x2); // copy x2 to temp2
    strcpy(x2, y2);    // copy y2 to x2
    strcpy(y2, temp2); // copy temp2 to y2

    printf("Swapped:\n");
    printf("x2 = %s\n", x2);
    printf("y2 = %s\n", y2);

    // NOTE: WILL CAUSE PROBLEM IF y2 IS SMALLER THAN x2. Define size to prevent problem: x2[15], y2[15]

    return 0;
}