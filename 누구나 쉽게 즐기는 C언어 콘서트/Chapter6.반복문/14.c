#include <stdio.h>

int main(void)
{
	int n, result = 0;

	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		result += i * i;

	printf("��갪�� %d�Դϴ�.\n", result);

	return 0;
}