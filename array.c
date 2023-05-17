#include<stdio.h>

int main()
{
	// array = a data structure that can store many values of the same data type

	double prices[] = { 5.0,5.1,5.2,5.3,5.4 };
	// same as char name[] = "SK";
	printf("$%.2lf", prices[0]); //index starts from 0

	for (int i = 0; i < 5; i++)
	{
		printf("\n$%.2lf", prices[i]);
	}

	double prices2[3]; //creates an array with 3 elements 0 - 2
	prices2[0] = 5;
	prices2[1] = 10;
	prices2[2] = 15;

	double prices3[] = { 2,4,6,8,10,12,14,16,18,20 };

	printf("\n%d bytes", sizeof(prices3));

	for (int k = 0; k < sizeof(prices3) / sizeof(prices3[0]); k++)
	{
		printf("\n$%.2lf", prices3[k]);
	}
	return 0;
}