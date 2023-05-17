#include<stdio.h>

int main()
{
	/*
	continue = skips rest of code in loop and forces next iteration
	break = exits loop / switch
	*/

	printf("CONTINUE:\n");
	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
		{
			continue;
		}
		printf("%d\n", i);
	}

	printf("\nBREAK:\n");

	for (int j = 0; j < 10; j++)
	{
		if (j == 6)
		{
			break;
		}
		printf("%d\n", j);
	}
	return 0;
}