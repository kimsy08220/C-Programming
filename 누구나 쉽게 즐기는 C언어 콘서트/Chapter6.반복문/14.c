#include <stdio.h>

int main(void)
{
	int n, result = 0;

	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		result += i * i;

	printf("계산값은 %d입니다.\n", result);

	return 0;
}