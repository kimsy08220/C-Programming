#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("제곱의 합을 구할 n을 입력 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
		sum += i * i;

	printf("1부터 %d까지의 제곱의 합은 %d입니다.\n", num, sum);
	return 0;
}