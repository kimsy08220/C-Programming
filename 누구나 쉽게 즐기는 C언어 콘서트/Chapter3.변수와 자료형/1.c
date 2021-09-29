#include <stdio.h>

int main(void)
{
	double num;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num);

	printf("지수 형식으로는 %le입니다.\n", num);
	return 0;
}