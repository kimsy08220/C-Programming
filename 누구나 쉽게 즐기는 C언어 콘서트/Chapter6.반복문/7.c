#include <stdio.h>

int main(void)
{
	int start, end, sum = 0;

	printf("시작정수 : ");
	scanf_s("%d", &start);
	printf("종료정수 : ");
	scanf_s("%d", &end);

	for (int i = start; i <= end; i++)
		sum += i;
	printf("%d에서 %d까지의 합 = %d\n", start, end, sum);

	return 0;
}