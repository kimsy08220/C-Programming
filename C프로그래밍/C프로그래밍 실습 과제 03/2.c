#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, a = 1, b = 4, c = 4;

	x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;

	printf("f(x) = x�� + 4x + 4�� �� ���ϱ�\nx1 = %lf\tx2 = %lf\n", x1, x2);
	
	return 0;
}