#include <stdio.h>

int main(void)
{
	int num, calc, result = 0;

	printf("�� �Է�  : ");
	scanf_s("%d", &num);
	printf("����(1, 2, 3)  : ");
	scanf_s("%d", &calc);

	switch (calc)
	{
	case 1: printf("�Է��� ���� %d�Դϴ�.\n", num);
		break;
	case 2: 
		result = num * 2;
		printf("�Է��� �� %d�� 2����� %d�Դϴ�.\n", num, result);
		break;
	case 3: 
		result = num * 3;
		printf("�Է��� �� %d�� 3����� %d�Դϴ�.\n", num, result);
		break;
	default: printf("�߸��� �������Դϴ�.\n");
	}

	return 0;
}