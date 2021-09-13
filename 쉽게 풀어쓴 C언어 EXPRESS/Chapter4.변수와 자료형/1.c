#include <stdio.h>

int main(void)
{
	double num;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num);

	printf("실수형식으로는 %f입니다.\n", num);

	printf("지수형식으로는 %e입니다.\n", num);

	return 0;
}