#include <stdio.h>

int main(void)
{
	int coin, price, change, coin100 = 0, coin10 = 0;

	printf("투입한 돈 : ");
	scanf_s("%d", &coin);
	printf("물건값 : ");
	scanf_s("%d", &price);

	change = coin - price;
	printf("거스름돈 : %d\n\n", change);

	coin100 = change / 100;
	coin10 = change % 100 / 10;
	printf("100원 동전의 개수 : %d\n10원 동전의 개수 : %d\n", coin100, coin10);

	return 0;
}