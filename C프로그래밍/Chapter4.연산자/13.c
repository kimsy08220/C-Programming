#include <stdio.h>

int main(void)
{
	int a, b, c, max = 0;

	printf("�� ���� ���� : ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a > b ? (b > c ? a : (a > c ? a : c)) : (b > c ? b : c);

	printf(">> ���� ū �� = %d\n", max);
	return 0;
}