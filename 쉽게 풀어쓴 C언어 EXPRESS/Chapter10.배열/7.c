#include <stdio.h>

int main(void)
{
	int n, result = 0, a[10][3] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		a[i][0] = i + 1;
		a[i][1] = (i + 1) * (i + 1);
		a[i][2] = (i + 1) * (i + 1) * (i + 1);
	}

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < 3; i++)
	{
		if (n == a[i][2])
		{
			printf("%d�� ���������� %d\n", n, a[i][0]);
			result = 1;
			break;
		}
	}
	if (result == 0)
		printf("�ش� ������ ���������� �迭�� �����ϴ�.\n");
	return 0;
}