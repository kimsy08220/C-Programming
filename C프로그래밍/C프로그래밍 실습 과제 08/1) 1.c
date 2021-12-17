#include <stdio.h>

int compute_sum_1toN(int N);

int main(void)
{
	int n, result;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	result = compute_sum_1toN(n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, result);
	return 0;
}

int compute_sum_1toN(int N)
{
	int sum = 0; 
	for (int i = 1; i <= N; i++)
		sum += i;
	return sum;
}