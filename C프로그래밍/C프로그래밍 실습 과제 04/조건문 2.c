#include <stdio.h>

int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
	{
		if (num % 2 == 0)
			printf("�Է��� ���� ���� ¦���Դϴ�.\n");
		else
			printf("�Է��� ���� ���� Ȧ���Դϴ�.\n");
	}
	else if (num > 0)
	{
		if (num % 2 == 0)
			printf("�Է��� ���� ���� ¦���Դϴ�.\n");
		else
			printf("�Է��� ���� ���� Ȧ���Դϴ�.\n");
	}
	else 
		printf("�Է��� ���� 0�Դϴ�.\n");

	return 0;
}