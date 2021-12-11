#include <stdio.h>

int main(void)
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	printf("입력한 수는 ");

	if (num < 0)
	{
		printf("음수이며, ");
		if (num % 2 == 0)
			printf("짝수입니다.\n");
		else
			printf("홀수입니다.\n");
	}
	else if (num > 0)
	{
		if (num > 100)
			printf("100보다 큰 수이며, ");
		printf("양수이며, ");
		if (num % 2 == 0)
			printf("짝수입니다.\n");
		else
			printf("홀수입니다.\n");
	}
	else
		printf("0입니다.\n");
	return 0;
}