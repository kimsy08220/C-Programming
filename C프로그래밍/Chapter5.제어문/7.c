#include <stdio.h>

int main(void)
{
	double cm, kg, avg = 0;

	printf("Ű : ");
	scanf_s("%lf", &cm);
	printf("ü�� : ");
	scanf_s("%lf", &kg);

	avg = (cm - 100) * 0.9;

	if (kg < avg - 5)
		printf("����� ��ü���Դϴ�.\n");
	else if (avg - 5 <= kg && kg <= avg + 5)
		printf("����� ǥ�� ü���Դϴ�.\n");
	else 
		printf("����� ��ü���Դϴ�.\n");
	return 0;
}