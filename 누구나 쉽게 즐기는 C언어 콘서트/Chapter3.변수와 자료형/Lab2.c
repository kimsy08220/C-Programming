#include <stdio.h>

int main(void)
{
	int money, f_money;

	printf("매달 저축 금액을 입력하시오 : ");
	scanf_s("%d", &money);

	f_money = money * 12 * 30;

	printf("30년 후의 재산 = %d원\n", f_money);
	return 0;
}