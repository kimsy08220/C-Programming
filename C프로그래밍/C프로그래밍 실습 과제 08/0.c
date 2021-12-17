#include <stdio.h>

int find_larger(int first, int second);

int main(void)
{
	int n1, n2, max;

	printf("첫째 정수? ");
	scanf_s("%d", &n1);
	printf("둘째 정수? ");
	scanf_s("%d", &n2);

	max = find_larger(n1, n2);
	printf("%d, %d 중 큰 값은 %d \n", n1, n2, max);

	return 0;
}

int find_larger(int first, int second)
{
	if (first > second)
		return first;
	else
		return second;
}