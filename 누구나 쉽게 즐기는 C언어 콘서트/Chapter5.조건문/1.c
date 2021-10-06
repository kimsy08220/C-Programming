#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("%d은 짝수입니다.\n", num);
	else if (num % 2 != 0)
		printf("%d은 홀수입니다.\n", num);
	else
		printf("0입니다.\n");
	return 0;
}