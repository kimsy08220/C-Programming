#include <stdio.h>

int main(void)
{
	int a, b, c, mid = 0;

	printf("첫 번째 정수 : ");
	scanf_s("%d", &a);
	printf("두 번째 정수 : ");
	scanf_s("%d", &b);
	printf("세 번째 정수 : ");
	scanf_s("%d", &c);

	mid = a > b ? (b > c ? b : (a > c ? c : a)) : (b > c ? (a > c ? a : c) : b);

	printf("세 정수 중 중간값 : %d\n", mid);

	return 0;
}