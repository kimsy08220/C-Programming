#include <stdio.h>

int main(void)
{
	double kg, lb = 0;

	printf("kg단위의 무게를 입력하세요 : ");
	scanf_s("%lf", &kg);

	lb = 1 / 0.45359237 * kg;

	printf("입력하신 무게 %.1lfkg은 %.1lflb에 해당합니다.\n", kg, lb);
	return 0;
}