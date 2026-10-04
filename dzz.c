#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	double r = sqrt(2);
	double ugol = M_PI / 4;
	double S;

	S = r * r * ugol / 2;

	printf("S = %.4f", S);

	return 0;
}