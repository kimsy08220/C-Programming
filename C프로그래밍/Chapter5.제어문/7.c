#include <stdio.h>

int main(void)
{
	double cm, kg, avg = 0;

	printf("키 : ");
	scanf_s("%lf", &cm);
	printf("체중 : ");
	scanf_s("%lf", &kg);

	avg = (cm - 100) * 0.9;

	if (kg < avg - 5)
		printf("당신은 저체중입니다.\n");
	else if (avg - 5 <= kg && kg <= avg + 5)
		printf("당신은 표준 체중입니다.\n");
	else 
		printf("당신은 과체중입니다.\n");
	return 0;
}