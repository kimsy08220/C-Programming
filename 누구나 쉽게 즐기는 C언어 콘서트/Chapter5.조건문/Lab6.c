#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double d = 0, x1 = 0, x2 = 0;

	printf("계수 a,b,c를 입력하시오 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (d == 0)
	{
		x1 = -c / a;
		printf("2개의 근 동일 = %lf\n", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		printf("첫 번째 실근 = %lf\n", x1);
		printf("두 번째 실근 = %lf\n", x2);
	}
	else
		printf("허수근입니다.\n");

	return 0;
}