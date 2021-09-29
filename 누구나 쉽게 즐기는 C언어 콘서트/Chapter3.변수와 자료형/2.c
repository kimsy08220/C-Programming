#include <stdio.h>

int main(void)
{
	double num;

	printf("지수형식으로 실수를 입력하시오 : ");
	scanf_s("%le", &num);

	printf("소수점 표시 형식으로는 %lf입니다.\n", num);
	return 0;
}