#include <stdio.h>

int main(void)
{
	double x, y = 0;

	printf("x의 값을 입력하시오 : ");
	scanf_s("%lf", &x);

	y = (x * x * x - 20) / (x - 7);

	printf("수식의 값은 %lf입니다.\n", y);
	return 0;
}