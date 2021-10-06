#include <stdio.h>

int main(void)
{
	int n1, n2, sum, minus;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n1);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n2);

	sum = n1 + n2;
	minus = n1 - n2;

	if (n1 < n2)
		minus = -minus;

	printf("두 수의 합은 %d입니다.\n두 수의 차는 %d입니다.\n", sum, minus);

	return 0;
}