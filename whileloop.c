#include <stdio.h>
#include <string.h>

int main() {
	//while loop => repeats section of code indefinetly WHILE condition remains true, might not execute at all

	char name[25];
	printf("\nWhat's your name?");
	fgets(name, 25, stdin); //name may contain space, so use fgets
	name[strlen(name) - 1] = '\0'; //get rid of new line char

	while (strlen(name) == 0)
	{
		printf("\nYou did not enter your name");
		printf("\nWhat's your name?");
		fgets(name, 25, stdin); //name may contain space, so use fgets
		name[strlen(name) - 1] = '\0'; //get rid of new line char
	}
	printf("Hello %s", name);

	return 0;
	//clrscr();
}