#include <stdio.h>

int main(void)
{
	double x, result = 0;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);

	if (x <= 0)
		result = x * x - 9 * x + 2;
	else
		result = 7 * x + 2;

	printf("f(x)�� ���� %f\n", result);
	return 0;
}