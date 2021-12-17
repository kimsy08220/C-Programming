#include <stdio.h>

int get_pay(int hours, int day_rate, int hour_rate);
int input(int total_hours);

int main(void)
{
	int total_hours = 0;
	int daily_rate = 100000, hourly_rate = 10000;
	int pay;

	total_hours = input(total_hours);

	pay = get_pay(total_hours, daily_rate, hourly_rate);
	printf("총 하루 임금은 %d원\n", pay);
	return 0;
}

int input(int total_hours)
{
	printf("근로 시간은? ");
	scanf_s("%d", &total_hours);
	return total_hours;
}

int get_pay(int hours, int day_rate, int hour_rate)
{
	int day = hours / 8;
	hours = hours % 8;

	return (day * day_rate + hours * hour_rate);
}