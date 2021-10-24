#include <stdio.h>

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n <= 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int n;

	printf("몇 번째 항까지 구할까요? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n + 1; i++)
		printf("%d, ", fib(i));

	return 0;
}

