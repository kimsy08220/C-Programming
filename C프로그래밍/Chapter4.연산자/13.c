#include <stdio.h>

int main(void)
{
	int a, b, c, max = 0;

	printf("세 개의 정수 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a > b ? (b > c ? a : (a > c ? a : c)) : (b > c ? b : c);

	printf(">> 가장 큰 수 = %d\n", max);
	return 0;
}