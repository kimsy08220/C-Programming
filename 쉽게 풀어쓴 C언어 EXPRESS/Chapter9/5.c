#include <stdio.h>

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n-1);
}

int main(void)
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("1부터 %d까지의 합 = %d\n", n, sum(n));

	return 0;
}