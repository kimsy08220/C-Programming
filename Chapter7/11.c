#include <stdio.h>

int main(void)
{
	int result = 0, n;

	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		result += i * i;

	printf("��갪�� %d�Դϴ�.\n", result);
	return 0;
}