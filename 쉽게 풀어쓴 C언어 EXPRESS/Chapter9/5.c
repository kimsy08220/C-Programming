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

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	printf("1���� %d������ �� = %d\n", n, sum(n));

	return 0;
}