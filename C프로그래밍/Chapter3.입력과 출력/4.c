#include <stdio.h>

int main(void)
{
	int r;
	double length;

	printf("둘레를 구할 원의 반지름은?");
	scanf_s("%d", &r);
	length = 2 * 3.14 * r;
	printf("반지름이 %d인 원의 둘레는 %.2llf\n", r, length);

	return 0;
}