#include <stdio.h>

int main(void)
{
	int month;

	printf("��(1~12) �Է� : ");
	scanf_s("%d", &month);

	month <= 6 ? printf(">> %d���� ��ݱ��Դϴ�.\n", month) : printf(">> %d���� �Ϲݱ��Դϴ�.\n", month);
	return 0;
}