#include <stdio.h>

int main(void)
{
	int a, b, c, min = 0, max = 0;

	printf("ù ��° �� : ");
	scanf_s("%d", &a);
	printf("�� ��° �� : ");
	scanf_s("%d", &b);

	min = a > b ? b : a;
	max = a > b ? a : b;

	printf("�ִ밪 : %d, �ּҰ� : %d\n", max, min);

	/*printf("ù ��° �� : ");
	scanf_s("%d", &a);
	printf("�� ��° �� : ");
	scanf_s("%d", &b);
	printf("�� ��° �� : ");
	scanf_s("%d", &c);

	min = a > b ? (b > c ? c : (a > c ? b : b)) : (b > c ? (a > c ? a : c) : c);

	printf("�ִ밪 : %d, �ּҰ� : %d\n", max, min);*/

	return 0;
}