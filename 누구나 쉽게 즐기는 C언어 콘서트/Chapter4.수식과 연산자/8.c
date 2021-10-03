#include <stdio.h>

int main(void)
{
	double n1, n2, value = 0;

	printf("2개의 실수를 입력하시오 : ");
	scanf_s("%lf%lf", &n1, &n2);

	value = n1 + n2;

	printf("합의 정수부 : %d\n", (int)value);
	return 0;
}