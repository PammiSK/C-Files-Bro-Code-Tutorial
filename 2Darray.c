#include<stdio.h>

int main()
{
	/*
	2D array - an array where each element is an entire array
	used for matrix, grid or table of data
	*/

	int nos[2][3] = { {1,2,3},{4,5,6} }; // eg. syntax = nos [rows] [columns]

	int nos2[2][3];
	nos2[0][0] = 1;
	nos2[0][1] = 2;
	nos2[0][2] = 3;
	nos2[1][0] = 4;
	nos2[1][1] = 5;
	nos2[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", nos2[i][j]);
		}
		printf("\n");
	}

	int nos3[2][3];

	int rows = sizeof(nos3) / sizeof(nos3[0]);
	int cols = sizeof(nos3[0]) / sizeof(nos3[0][0]);

	nos3[0][0] = 1;
	nos3[0][1] = 2;
	nos3[0][2] = 3;
	nos3[1][0] = 4;
	nos3[1][1] = 5;
	nos3[1][2] = 6;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", nos3[i][j]);
		}
		printf("\n");
	}

	return 0;
}