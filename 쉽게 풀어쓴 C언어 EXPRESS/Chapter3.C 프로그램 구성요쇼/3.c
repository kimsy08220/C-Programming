#include <stdio.h>

int main(void)
{
	double w, h, area = 0;

	printf("�ﰢ���� �غ� : ");
	scanf_s("%lf", &w);

	printf("�ﰢ���� ���� : ");
	scanf_s("%lf", &h);

	area = w * h * 0.5;

	printf("�ﰢ���� ���� : %lf\n", area);

	return 0;
}