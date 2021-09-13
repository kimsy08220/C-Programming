#include <stdio.h>

int main(void)
{
	double w, h, area = 0;

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf_s("%lf", &w);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf_s("%lf", &h);

	area = w * h * 0.5;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %lf\n", area);

	return 0;
}