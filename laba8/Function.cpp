#define _USE_MATH_DEFINES 
#include <math.h>

#include "Header1.h"

double func1(double y, double x, double z) {
	double a;
	if (y != 0 && x >= -y) {
		a = -4 * z * ((pow((sqrt(x + y) / pow(y, 2)), 1. / 3)) - fabs(3 * y + 5 * pow(x, (-1)))) + pow(M_E, 3);
	}
	return a;
}

double func2(double y, double x, double z, double a) {
	double b;
	if (x != 0) {
		b = sqrt(x * x + a - y * y * pow(sin(x + z) / x, 3)) + sin(20. / 3 * M_PI);
	}
	return b;
}

int func3(int a) {
	int sum; {
		sum = 0;
		while (a > 9) {
			sum += a % 10;
			a = a / 10;
		}
		sum += a;
	}
	return sum;
}