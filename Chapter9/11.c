#include <stdio.h>

int recursive(int n, int k)
{
	if (0 < k && k < n)
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
	else
		return 1;
}

int main(void)
{
	int n, k;

	printf("n = ");
	scanf_s("%d", &n);
	printf("k = ");
	scanf_s("%d", &k);

	printf("%d\n", recursive(n, k));
	return 0;
}