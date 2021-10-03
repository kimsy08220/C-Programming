#include <stdio.h>

int main(void)
{
	int num, n, value = 0;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);
	printf("n을 입력하시오 : ");
	scanf_s("%d", &n);

	value = (1 << n) | num;

	printf("새로운 값 = %d\n", value);

	return 0;
}