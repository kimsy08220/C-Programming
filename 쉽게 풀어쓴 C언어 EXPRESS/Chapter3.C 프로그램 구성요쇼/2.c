#include <stdio.h>

int main(void)
{
	double mile, meter;

	printf("마일을 입력하시오 : ");
	scanf_s("%lf", &mile);

	meter = 1609.0 * mile;

	printf("%.1lf마일은 %lf미터입니다.\n", mile, meter);

	return 0;
}