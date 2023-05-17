#include<stdio.h>

int main() {

	char grade;
	printf("\nEnter a letter grade: ");
	scanf("%c", &grade);

	//  SWITCH is more efficient ELSE-IF for multiple cases of Else-If
	switch (toupper(grade)) {
	case 'A':
		printf("Perfect!\n");
		break; // to exit stmt once required condition is met and related code is executed

	case 'B':
		printf("Nice!\n");
		break;

	case 'C':
		printf("Try harder :)\n");
		break;

	case 'D':
		printf("Do better :)\n");
		break;

	default:
		printf("Enter valid letter grade");
		break;
	}

	return 0;
}