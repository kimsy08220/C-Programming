#include <stdio.h>

int main(void)
{
	int x;
	double result = 0;

	printf("x�Է� : ");
	scanf_s("%d", &x);

	result = 2 * x*x*x - 3 * x*x + 1.0 / x;

	printf("   -> x=%d�� ��\n", x);
	printf("      f(x) = 2x��-3x��+1/x = %.1lf\n", result);
	return 0;
}