#include <stdio.h>

int main(void)
{
	int coin, price, change, coin100 = 0, coin10 = 0;

	printf("������ �� : ");
	scanf_s("%d", &coin);
	printf("���ǰ� : ");
	scanf_s("%d", &price);

	change = coin - price;
	printf("�Ž����� : %d\n\n", change);

	coin100 = change / 100;
	coin10 = change % 100 / 10;
	printf("100�� ������ ���� : %d\n10�� ������ ���� : %d\n", coin100, coin10);

	return 0;
}