#include <stdio.h>

int main(void)
{
	double F, C;

	printf("화씨온도(F)를 입력하세요 : ");
	scanf_s("%lf", &F);

	C = (5 / 9.0) * (F - 32);

	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.\n", F, C);
	
	return 0;
}