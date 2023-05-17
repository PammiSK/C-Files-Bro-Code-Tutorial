#include <stdio.h>
#include <ctype.h>

int main() {

	char unit;
	float temp;

	printf("Is temp in SI(K), fReEdOm(F) or Standard(C) units? ");
	scanf("%c", &unit);
	unit = toupper(unit);

	if (unit == 'C') {
		printf("Enter temp in C :) ");
		scanf("%f", &temp);

		temp += 273;
		printf("Temp in K is %.1f\n", temp);

		temp = ((temp - 273) * (9 / 5)) + 32;
		printf("Temp in F is %.1f", temp);

	}
	else if (unit == 'F') {
		printf("Enter temp in F :| ");
		scanf("%f", &temp);

		temp = ((temp - 32) * 5) / 9;
		printf("Temp in C is %.1f\n", temp);

		temp += 273;
		printf("Temp in K is %.1f", temp);

	}
	else if (unit == 'K') {
		printf("Enter temp in K :D ");
		scanf("%f", &temp);

		temp -= temp;
		printf("Temp in C is %.1f\n", temp);

		temp = (temp * (9 / 5)) + 32;
		printf("Temp in F is %.1f", temp);

	}
	else {
		printf("%c is not a valid unit", unit);
	}

	return 0;
}
