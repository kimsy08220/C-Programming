#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�ﰢ���� ���� �Է� : ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
		printf("��ȿ�� �ﰢ��\n");
	else
		printf("��ȿ���� ���� �ﰢ��\n");

	return 0;
}