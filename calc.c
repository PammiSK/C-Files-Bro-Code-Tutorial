#include <stdio.h>

int main() {

	char opr;
	double num1;
	double num2;
	double res;

	printf("Enter an operand (+-*/): ");
	scanf("%c", &opr);

	printf("Enter number 1: ");
	scanf("%lf", &num1);

	printf("Enter number 2: ");
	scanf("%lf", &num2);

	switch (opr) {
	default:
		printf("%c is a invalid!", opr);
		break;

	case '+':
		res = num1 + num2;
		printf("Result: %lf", res);
		break;

	case '-':
		res = num1 - num2;
		printf("Result: %lf", res);
		break;

	case '*':
		res = num1 * num2;
		printf("Result: %lf", res);
		break;

	case '/':
		res = num1 / num2;
		printf("Result: %lf", res);
		break;
	}

	return 0;
}