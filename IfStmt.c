#include <stdio.h>

int main() {

	short int age;
	printf("How old are you? ");
	scanf("%d", &age);

	/*
	COMPARISON OPERATORS
	a==b a equal to b
	!! a=b a assigned value of b !!
	a>b a greater than b
	a<b a lesser than b
	a>=b a greater than or equal to b
	a<=b a lesser than or equal to b
	a!=b a Not equal to b
	*/

	if (age >= 18) {
		printf("You can sign up! :)\n");
	}
	else if (age < 0) {
		printf("You aren't born yet :|\n");
	}
	else if (age == 0) {
		printf("You are just born :D\n");
	}
	else {
		printf("You are too young. :(\n");
	}

	return 0;
}