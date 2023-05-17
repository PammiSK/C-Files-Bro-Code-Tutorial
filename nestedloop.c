#include <stdio.h>

int main() {

	//Nested loop = loop inside of loop

	int r;
	int c;
	char sym;

	printf("\nEnter # of rows: ");
	scanf("%d", &r);
	printf("\nEnter # of columns: ");
	scanf("%d", &c);
	scanf("%c"); // getting rid of new line character (Enter)
	printf("\nEnter symbol, to use: ");
	scanf("%c", &sym);

	for (int i = 0; i < r; i++)
	{
		printf("%d: ", i);
		for (int j = 0; j < c; j++)
		{
			printf("%c", sym);
		}
		printf("\n");
	}

	return 0;
	//clrscr();
}