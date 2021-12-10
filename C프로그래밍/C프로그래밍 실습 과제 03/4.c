#include <stdio.h>

int main(void)
{
	int a, b, c, min = 0, max = 0;

	printf("첫 번째 수 : ");
	scanf_s("%d", &a);
	printf("두 번째 수 : ");
	scanf_s("%d", &b);

	min = a > b ? b : a;
	max = a > b ? a : b;

	printf("최대값 : %d, 최소값 : %d\n", max, min);

	/*printf("첫 번째 수 : ");
	scanf_s("%d", &a);
	printf("두 번째 수 : ");
	scanf_s("%d", &b);
	printf("세 번째 수 : ");
	scanf_s("%d", &c);

	min = a > b ? (b > c ? c : (a > c ? b : b)) : (b > c ? (a > c ? a : c) : c);

	printf("최대값 : %d, 최소값 : %d\n", max, min);*/

	return 0;
}