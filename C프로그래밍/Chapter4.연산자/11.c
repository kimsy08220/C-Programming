#include <stdio.h>

int main(void)
{
	int x;
	double result = 0;

	printf("x입력 : ");
	scanf_s("%d", &x);

	result = 2 * x*x*x - 3 * x*x + 1.0 / x;

	printf("   -> x=%d일 때\n", x);
	printf("      f(x) = 2x³-3x²+1/x = %.1lf\n", result);
	return 0;
}