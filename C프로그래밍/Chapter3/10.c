#include <stdio.h>

int main(void)
{
	double cm, kg, ave = 0, feet = 0, lb = 0;

	printf("Ű(cm)�� �Է��ϼ��� : ");
	scanf_s("%lf", &cm);
	printf("������(kg)�� �Է��ϼ��� : ");
	scanf_s("%lf", &kg);

	feet = 1 / 30.48 * cm;
	lb = 2.20459 * kg;
	ave = (cm - 100) * 0.9;

	printf("\n����� Ű�� %.1lfcm (%.1lffeet)�Դϴ�.\n", cm, feet);
	printf("����� ü���� %.1lfkg (%.1lflb)�Դϴ�.\n", kg, lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg�Դϴ�.\n", ave, kg - ave);

	return 0;
}