#include <stdio.h>

int main(void)
{
	double cm, kg, ave = 0, feet = 0, lb = 0;

	printf("키(cm)를 입력하세요 : ");
	scanf_s("%lf", &cm);
	printf("몸무게(kg)를 입력하세요 : ");
	scanf_s("%lf", &kg);

	feet = 1 / 30.48 * cm;
	lb = 2.20459 * kg;
	ave = (cm - 100) * 0.9;

	printf("\n당신의 키는 %.1lfcm (%.1lffeet)입니다.\n", cm, feet);
	printf("당신의 체중은 %.1lfkg (%.1lflb)입니다.\n", kg, lb);
	printf("표준 체중 %.1lf과의 차이는 %+.1lfkg입니다.\n", ave, kg - ave);

	return 0;
}