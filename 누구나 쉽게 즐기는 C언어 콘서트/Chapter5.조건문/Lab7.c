#include <stdio.h>

int main(void)
{
	int tmp;

	printf("������ ����� �Է��Ͻÿ� : ");
	scanf_s("%d", &tmp);

	if (tmp < -10)
		printf("�ſ� �߿� �����Դϴ�.\n");
	else if (-10 <= tmp && tmp < 0)
		printf("�߿� �����Դϴ�.\n");
	else if (0 <= tmp && tmp < 10)
		printf("�ҽ��� �����Դϴ�.\n");
	else if (10 <= tmp && tmp < 20)
		printf("������ �����Դϴ�.\n");
	else if (20 <= tmp && tmp < 30)
		printf("���� �����Դϴ�.\n");
	else if (30 <= tmp)
		printf("�ſ� ���� �����Դϴ�.\n");

	return 0;
}