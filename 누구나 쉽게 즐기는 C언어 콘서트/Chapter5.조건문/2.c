#include <stdio.h>

int main(void)
{
	int n1, n2, sum, minus;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n1);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n2);

	sum = n1 + n2;
	minus = n1 - n2;

	if (n1 < n2)
		minus = -minus;

	printf("�� ���� ���� %d�Դϴ�.\n�� ���� ���� %d�Դϴ�.\n", sum, minus);

	return 0;
}