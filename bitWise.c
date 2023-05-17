#include <stdio.h>

int main()
{
    /*
    bitwise operators - operators used in  bit level programming
    important to know binary
    & AND
    | OR
    ^ XOR
    << LEFT SHIFT
    >> RIGHT SHIFT
    */

    int x, y, z;
    x = 6;  // 6 =  0000 0110
    y = 12; // 12 = 0000 1100
    z = 0;  // 0 =  0000 0000

    // AND
    z = x & y; // 0000 0100 = 4
    printf("z = x(%d) AND y(%d) = %d\n", x, y, z);

    // OR
    z = x | y; // 0000 1110 = 14
    printf("z = x(%d) OR y(%d) = %d\n", x, y, z);

    // XOR
    z = x ^ y; // 0000 1010 = 10
    printf("z = x(%d) XOR y(%d) = %d\n", x, y, z);

    // L SHIFT
    int lsb = 3;
    z = x << lsb; // 0000 0110 L Shift by 1 bit = 0000 1100 = 12, 2 bits = 0001 1000 = 24, doubles no. for every 1 L shift
    printf("z = x(%d) L SHIFT by %d bit = %d\n", x, lsb, z);

    // R SHIFT
    int rsb = 2;
    z = y >> rsb; // 0000 1100 R Shift by 1 bit = 0000 0110 = 6, 2 bits = 0000 0011 = 3, halves no. for every 1 R shift
    printf("z = y(%d) R SHIFT by %d bit = %d\n", y, rsb, z);

    return 0;
}