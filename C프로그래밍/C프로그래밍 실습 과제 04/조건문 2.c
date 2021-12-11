#include <stdio.h>

int main(void)
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
	{
		if (num % 2 == 0)
			printf("입력한 수는 음의 짝수입니다.\n");
		else
			printf("입력한 수는 음의 홀수입니다.\n");
	}
	else if (num > 0)
	{
		if (num % 2 == 0)
			printf("입력한 수는 양의 짝수입니다.\n");
		else
			printf("입력한 수는 양의 홀수입니다.\n");
	}
	else 
		printf("입력한 수는 0입니다.\n");

	return 0;
}