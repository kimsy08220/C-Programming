#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
		sum += i;

	printf("%d까지의 합 : %d\n", num, sum);

	return 0;
}