#include <stdio.h>

int main(void)
{
	int money, f_money;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &money);

	f_money = money * 12 * 30;

	printf("30�� ���� ��� = %d��\n", f_money);
	return 0;
}