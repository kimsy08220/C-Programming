#include <stdio.h>

int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("�Է��� ���� ");

	if (num < 0)
	{
		printf("�����̸�, ");
		if (num % 2 == 0)
			printf("¦���Դϴ�.\n");
		else
			printf("Ȧ���Դϴ�.\n");
	}
	else if (num > 0)
	{
		if (num > 100)
			printf("100���� ū ���̸�, ");
		printf("����̸�, ");
		if (num % 2 == 0)
			printf("¦���Դϴ�.\n");
		else
			printf("Ȧ���Դϴ�.\n");
	}
	else
		printf("0�Դϴ�.\n");
	return 0;
}