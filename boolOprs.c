#include <stdio.h>
#include <stdbool.h>

int main() {

	//AND operator && checks if 2 or more conditions are true
	float temp = 25;
	bool seeSun = true;
	if (temp >= 20 && temp <= 35 && seeSun == true) {
		printf("\nGood weather!(AND)");
	}
	else {
		printf("\nBad weather!(AND)");
	}

	//OR operator || checks if at least 1 condition is true
	if (temp <= 20 || temp >= 35) {
		printf("\nBad weather!(OR)");
	}
	else {
		printf("\nGood weather!(OR)");
	}

	//NOT operator ! reverses state of condition
	if (!seeSun != 1) {
		printf("\nIt is sunny");
	}
	else {
		printf("\nIt is cloudy");
	}

	return 0;
}