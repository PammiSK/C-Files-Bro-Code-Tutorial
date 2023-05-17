#include<stdio.h>

int main()
{
	/*
	while loop -> checks condition before execution, may not exe. at all
	do while loop -> always exe. block of code once, THEN checks condition
	ref. while(!road){ run();} VS do {run();} while (!road)
	*/

	int no = 0;
	int sum = 0;

	do
	{
		printf("Enter a no above 0: ");
		scanf("%d", no);
		if (no > 0)
		{
			sum += no;
		}
	} while (no > 0);
	printf("SUM= %d", sum);

	return 0;
}