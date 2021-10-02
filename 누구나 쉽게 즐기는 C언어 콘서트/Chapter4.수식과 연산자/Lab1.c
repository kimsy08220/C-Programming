#include <stdio.h>

int main(void)
{
	int days, year = 0, week = 0;

	printf("총 일수를 입력하시오 : ");
	scanf_s("%d", &days);

	year = days / 365;
	week = days % 365 / 7;
	days = days % 365 % 7;

	printf("%d년 %d주 %d일\n", year, week, days);
	return 0;
}