#include <stdio.h>
#include <math.h>

int main() {

	float a = sqrt(9); // square root
	int b = pow(2, 4); // power / exponent
	int c = round(9.81); // round off
	int d = ceil(3.14); // round up
	int e = floor(2.71); // round down
	float f = fabs(-100); // absolute value
	float g = log(3); //logrithm
	float h = sin(45); //sine, trig.
	float i = cos(45); //cosine, tig.
	float j = tan(45); //tangent, trig.

	// Circ and Ar of Circle
	const float PI = 3.14159;
	float rad, circ, ar;
	printf("\nEnter radius: ");
	scanf("%f", &rad);
	circ = 2 * PI * rad;
	ar = PI * rad * rad;
	printf("\nCircumference: %.3f", circ);
	printf("\nArea: %.3f", ar);

	// Calc Hypotneuse of Triangle
	float lt, ht, hyp;
	printf("\nEnter Length: ");
	scanf("%f", &lt);
	printf("Enter Height: ");
	scanf("%f", &ht);
	hyp = sqrt(lt * lt + ht * ht);
	printf("Hypotneuse: %.3f", hyp);

	return 0;
}