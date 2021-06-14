#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}

int main(void)
{
	int x, y, p_sum = 0, p_diff = 0;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	get_sum_diff(x, y, &p_sum, &p_diff);

	printf("원소들의 합 = %d\n", p_sum);
	printf("원소들의 차 = %d\n", p_diff);
	return 0;
}