#include <stdio.h>

int main(void)
{
	double cm, feet = 0, inch = 0;

	printf("키(cm)를 입력하세요 : ");
	scanf_s("%lf", &cm);

	inch = 1 / 2.54 * cm;
	feet = 1 / 12.0 * inch;

	printf("입력하신 키 %.2lf센티미터는 %.2lf피트와 %.2lf인치에 해당됩니다.\n", cm, feet, inch);
	return 0;
}