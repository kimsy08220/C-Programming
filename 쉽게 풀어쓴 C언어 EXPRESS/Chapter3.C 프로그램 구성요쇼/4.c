#include <stdio.h>

int main(void)
{
	double C, F;

	printf("화씨값을 입력하시오 : ");
	scanf_s("%lf", &F);

	//C = 5 * (F - 32) / 9;
	C = (5.0 / 9.0) * (F - 32.0);

	printf("섭씨값은 %lf도입니다.\n", C);

	return 0;
}