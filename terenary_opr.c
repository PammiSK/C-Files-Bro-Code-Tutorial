#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int findMax1(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}

int findMax2(int a, int b)
{
	return (a > b) ? a : b;

}

int main() {

	/*
	terenary opr. = shortcut for if else
	(condition) ? value if true: value if false
	*/

	int max1 = findMax1(3, 4);
	printf("%d", max1);
	int max2 = findMax2(4, 5);
	printf("\n%d", max2);

	return 0;
	//clrscr();
}