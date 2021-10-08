#include <stdio.h>
// 수정

int main(void)
{
	int avg_money;
	double money = 0;

	printf("과세 표준을 입력하시오(만원) : ");
	scanf_s("%d", &avg_money);

	if (avg_money <= 1000)
		money += money * 0.08;
	if (avg_money <= 4000)
		money += money * 0.17;
	if (avg_money <= 8000)
		money += money * 0.26;
	if (8001 <= avg_money)
		money += money * 0.35;

	printf("소득세는 %lf만원입니다.\n", money);

	return 0;
}