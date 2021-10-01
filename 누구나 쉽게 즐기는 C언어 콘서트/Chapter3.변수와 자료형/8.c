#include <stdio.h>

int main(void)
{
	int m, hour, min, sec;
	double km = 0;

	printf("거리를 미터로 입력하시오 : ");
	scanf_s("%d", &m);

	printf("시간을 입력하시오 : ");
	scanf_s("%d", &hour);

	printf("분을 입력하시오 : ");
	scanf_s("%d", &min);

	printf("초를 입력하시오 : ");
	scanf_s("%d", &sec);

	km = (double)m / (hour + min / 60.0 + sec / 60.0 / 60.0) / 1000;

	printf("속도 : %lf\n", km);
	return 0;
}