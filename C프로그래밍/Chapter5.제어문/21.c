#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d%d", &n1, &n2);

	printf("%d�� ��������� %d�� ����� �ƴ� ��\n", n1, n2);

	for (int i = 0; i <= 100; i++)
	{
		if (i % n1 == 0 && i % n2 != 0)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}