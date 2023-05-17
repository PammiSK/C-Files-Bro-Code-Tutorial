#include <stdio.h>
#include <stdbool.h>

int main() {

	printf("Hello World!");
	printf("My name is SIVA");

	printf("Hello World!\n");
	printf("My name is SIVA\n");

	// comment for explaining
	/*
	multi-line comment
	for explaining
	*/

	/*
	RUN C PROG. IN COMMAND PROMPT (CP):
	check for gcc -> gcc --version <or> g++ --version
	change directory in CP: cd "source code location"
	compile C file: gcc "filename".c
	run compiled file: "newly created file name".exe
	*/

	//ESCAPE SEQUENCES   
	// \n - new line
	// \t - new tab
	printf("Hello World!\tMy name is SIVA");
	printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9\n"); //grid
	// to print " quotes use \" <text> \"
	printf("\"Hello there!\" - General Kenobi\n");
	/* to print \, use \\ */
	printf("AND\\OR\n");

	//VARIABLES
	int x; //decalre, data type-> int (integer)
	x = 123; //initialise
	int y = 456; //declare and initalise
	int age = 27;
	float gpa = 3.75; //float has decimal, also double, but double takes up more memory for more decimal points
	char grade = 'A'; //single character
	char fname[] = "SIVA"; // array of characters

	printf("Hello %s!\n", fname); //s for string
	printf("You are  %d years old\n", age); //d for decimal
	printf("Your Grade is %c\n", grade); // c for character
	printf("Your GPA is %f\n", gpa); //f for float

	//DATA TYPES
	//Letters:
	char a = 'X'; // 1 character, %c
	char i = 120; // also store integer -128 to +127 for no. as character based on ASCII, 120 on ASCII table is char 'x', %d
	unsigned char j = 255; // uunsigned negates all -ve no.s, doubling the range for +ve no.s, range on u/s char 0-255
	signed char ii = 120; //same as char i=120;, for signed, the keyword need not be specified
	char b[] = "ABCD"; // array of char.s, %s

	//Float & Double:
	int c = 3; // whole number, no decimal, %d
	float d = 3.141592; // 6-7 decimal pt.s, 4 bytes (32 bits) precision, up to MICRO, %f
	float dd = 3.14592659589793;
	double e = 3.14592659589793; // 15-16 decimal pt.s, 8 bytes (64 bits) precision, more precise, NANO - PICO, %lf
	printf("Float as Float: %f\n", dd);
	printf("Float as Double: %0.15lf\n", dd); //0.15 - 15 digits after decimal pt.
	printf("Double: %0.15lf\n", e);

	//Boolean: #include <stdbool.h> header required
	bool g = true; // 1 byte memory true/false, %d
	bool h = 0; // also can use 1/0 for t/f

	//Integers: stores WHOLE no.s ONLY
	int k; //standard, 4 bytes memory, -2.1B- +2.1B, %d
	long int kk; //same as int, long need not be specified

	short int l; // 2 bytes, -32k - +32k, %d
	short ll; //same as short int

	unsigned int m; // 4 bytes, 0 - 4.2B, %u
	unsigned long int mm; // same as unsigned int, long need not be specified

	unsigned short int n; // 2 bytes 0 - 65k, %d
	unsigned short nn; // same as unsigned short int
	//When number overflow, it resets to minumum value

	long long int o; // 8 bytes, -9 Quintillion (10^18) - +9 Quintillion, %lld
	unsigned long long int p; //8 bytes, 0 - 18 Quintillion, %llu
	//use letter U at end of unsigned long long int to prevent error msg.
	// rarely used, eg.of use: speed of light (299,792,458m/s) and related calculations (ASTRONOMICAL)

	//FORMAT SPECIFIERS
	/*
	%c - character
	%s - string
	%f - float
	%lf - long float
	%d - integer

	%.1 - decimal precision
	%1 - min field width
	%- - left align
	*/

	float i1, i2, i3;
	i1 = 5.75;
	i2 = 10.00;
	i3 = 100.99;

	printf("Item 1: $%-8.2f\n", i1);
	printf("Item 1: $%-8.2f\n", i2);
	printf("Item 1: $%-8.2f\n", i3);

	/*
	CONSTANTS
	Cannot be altered by prog during execution
	Make a variable constant by adding keyword const
	Use all UPPERCASE for constants
	*/
	const float PI = 3.14159;

	/*
	ARITHMETIC OPERATORS
	+ add
	- subtract
	* multiply
	/ divide
	% modulus, remainder of int division
	++ increment
	-- decrement
	*/

	//Integer Division !CAN CAUSE ERRORS!
	printf("FRACTIONS AND INTEGER DIVISIONS");
	int num = 5;
	int den = 2;
	int frac = num / den;
	printf("\nInteger division 5/2 = %d", frac); //result is 2, NOT 2.5 due to intger division

	//Solve by changing frac to float then:
	float frac2;
	//1: type convert den at declaration:
	float den2 = 2;
	frac2 = num / den2;
	printf("\nfloat frac = int num / float den = %f", frac2);

	//2: type convert den at formula:
	float frac3 = num / (float)den;
	printf("\nfloat frac = int num / (float) den = %f", frac3);

	int rem = num % den;
	printf("\nremainder = num MOD den = %d", rem);

	num++; //inc    
	den--; //dec
	printf("\nIncrement Num = %d", num);
	printf("\nDecrement Den = %d\n", den);

	// AUGMENTED ASSIGNMENT OPERATORS
	short int q = 360;
	short int qq = 360;
	short int r = 360;
	short int rr = 360;
	short int s = 360;
	short int ss = 360;
	short int t = 360;
	short int tt = 360;
	short int u = 360;
	short int uu = 360;

	printf("AUGMENTED ASSIGNMENT OPERATORS");
	q = q + 2;
	qq += 2;
	printf("\nq = q+2 %d", q);
	printf("\nqq += 2 %d", qq);

	r = r - 3;
	rr -= 3;
	printf("\nr = r-3 %d", r);
	printf("\nrr -= 3 %d", rr);

	s = s * 4;
	ss *= 4;
	printf("\ns = s*4 %d", s);
	printf("\nss *= 4 %d", ss);

	t = t / 5;
	tt /= 5;
	printf("\nt = t/5 %d", t);
	printf("\ntt /= 5 %d", tt);

	u = u % 7;
	uu %= 7;
	printf("\nu = u MOD 7 %d", u);
	printf("\nuu MOD= 7 %d", uu);

	return 0;
}