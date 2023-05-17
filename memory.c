#include <stdio.h>

int main()
{
    /*
    memory - array of bytes within RAM (street)
    mem block - a single unit (byte) within memory, used to hold value (person)
    mem address - the address of where mem blk is located (house address)
    */

    char a = 'X';
    printf("CHAR:\n");
    printf("Memory size = %d byte(s)\n", sizeof(a));
    printf("Address = %p\n", &a);

    short b = 'X';
    printf("SHORT:\n");
    printf("Memory size = %d byte(s)\n", sizeof(b));
    printf("Address = %p\n", &b);

    int c = 'X';
    printf("INT:\n");
    printf("Memory size = %d byte(s)\n", sizeof(c));
    printf("Address = %p\n", &c);

    double d = 'X';
    printf("DOUBLE:\n");
    printf("Memory size = %d byte(s)\n", sizeof(d));
    printf("Address = %p\n", &d);

    char e[4];
    printf("CHAR ARRAY:\n");
    printf("Memory size = %d byte(s)\n", sizeof(e));
    printf("Address = %p\n", &e);

    short f[4];
    printf("SHORT ARRAY:\n");
    printf("Memory size = %d byte(s)\n", sizeof(f));
    printf("Address = %p\n", &f);

    return 0;
}