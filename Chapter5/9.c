#include <stdio.h>

int main(void)
{
	double AE, AC, BC, DE;

	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &BC);

	printf("지팡이 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &AC);

	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf_s("%lf", &AE);

	DE = AE * BC / AC;

	printf("피라미드의 높이는 %f입니다.\n", DE);
	return 0;
}