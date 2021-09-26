#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num2);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num3);

	printf("평균은 %lf입니다.\n", (num1 + num2 + num3) / 3.0);
	return 0;
}