#include <stdio.h>

int main(void)
{
	int days, year = 0, week = 0;

	printf("�� �ϼ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &days);

	year = days / 365;
	week = days % 365 / 7;
	days = days % 365 % 7;

	printf("%d�� %d�� %d��\n", year, week, days);
	return 0;
}