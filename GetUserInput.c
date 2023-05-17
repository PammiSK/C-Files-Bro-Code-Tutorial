#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

	int age;
	printf("How old are you? ");
	scanf("%d", &age);
	printf("You are %d years old\n", age);

	int snl = 7;
	char name[snl];
	printf("What's your name? (in max. %d char.s) ", snl);
	scanf("%s", &name);
	printf("Hello %s! How are you?\n", name);

	char fullName[25];
	printf("What's your full name? (in max. 25 char.s, Fname Lname) ");
	fgets(fullName, 25, stdin);
	fullName[strlen(fullName) - 1] = '\0'; // removes the Enter as an input at end of string with white space
	printf("Your full name is: %s", fullName);

	return 0;
}