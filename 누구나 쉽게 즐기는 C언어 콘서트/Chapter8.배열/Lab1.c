#include <stdio.h>

double FtoC(double temp_f);

int main(void) {
	double C, F = 32.0;
	C = FtoC(F);
	printf("È­¾¾¿Âµµ %lfÀº ¼·¾¾¿Âµµ %lf¿¡ ÇØ´çÇÑ´Ù.\n", F, C);
	return 0;
}

double FtoC(double temp_f) {
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}