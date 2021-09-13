#include <stdio.h>

int main(void)
{
	double n1, n2, n3, sum = 0, avg = 0;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &n1);

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &n2);

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &n3);

	sum = n1 + n2 + n3;
	avg = sum / 3;

	printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);

	return 0;
}