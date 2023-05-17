#include <stdio.h>

int main() {

	for (int i = 1; i <= 10; i++) //for loop repeats section liimited amount of time, i from 1 to 10 - 10 times
		// for (int i=0; i<10; i++), i from 0 to 9 - 10 times
	{
		printf("%d\n", i);
	}

	printf("\n");

	for (int i = 0; i < 10; i += 2)
	{
		printf("%d\n", i);
	}

	printf("\n");

	for (int i = 10; i > 0; i--)
	{
		printf("%d\n", i);
	}

	printf("\n");

	for (int i = 10; i > 0; i -= 2)
	{
		printf("%d\n", i);
	}

	return 0;
	//clrscr();
}