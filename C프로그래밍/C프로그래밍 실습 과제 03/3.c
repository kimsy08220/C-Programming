#include <stdio.h>

int main(void)
{
	int a, b, c, mid = 0;

	printf("ù ��° ���� : ");
	scanf_s("%d", &a);
	printf("�� ��° ���� : ");
	scanf_s("%d", &b);
	printf("�� ��° ���� : ");
	scanf_s("%d", &c);

	mid = a > b ? (b > c ? b : (a > c ? c : a)) : (b > c ? (a > c ? a : c) : b);

	printf("�� ���� �� �߰��� : %d\n", mid);

	return 0;
}