#include <stdio.h>

int main(void)
{
	double kg, moon_kg = 0;

	printf("몸무게를 입력하세요(단위 : kg) : ");
	scanf_s("%lf", &kg);

	moon_kg = kg * 0.17;

	printf("달에서의 몸무게는 %lf입니다.\n", moon_kg);

	return 0;
}