#include <stdio.h>

void hbd()
{
	printf("\nHBD to you!");
	printf("\nHBD to you!");
	printf("\nHBD NAME!");
	printf("\nHBD to you!\n");
}

void birthday(char x[], int y)
{
	printf("\nHBD dear %s!", x);
	printf("\nYou are %d years old!", y);
}

double square1(double x)
{
	double result = x * x;
	return result;
}

double square2(double y)
{
	return y * y;
}

void hello(char[], int); // fn. prototype - ensures calls to fn.s are made with the correct arguments

int main() {

	hbd();
	/*hbd();
	hbd();*/

	char name[] = "Siva";
	int age = 28;
	birthday(name, age); //"name" and "age" are arguments (i/p to a fn.)

	double x = square1(3.14);
	printf("\n%lf", x);

	double y = square2(3.14);
	printf("\n%lf", y);

	// return stmt returns value to a calling fn.

	hello(name, age);

	return 0;
	//clrscr();
}

void hello(char name[], int age) //uses fn. prototype to prevent error if wrong arguments are give: lesser, more or wrong type, many compilers don't check for parameter matching
{
	printf("\nHello %s ", name);
	printf("You are %d years old", age);
}