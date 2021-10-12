#include <stdio.h>

int main(void)
{
	int num, i;

	printf("양의 정수 n : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (num == i)
		printf(">> %d는(은) 소수입니다.\n", num);
	else
		printf(">> %d는(은) 소수가 아닙니다.\n", num);

	return 0;
}