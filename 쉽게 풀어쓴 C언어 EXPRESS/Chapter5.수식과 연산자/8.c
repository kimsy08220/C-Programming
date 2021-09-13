#include <stdio.h>
#define PI 3.14	

int main(void)
{
	double radius, A, V;

	printf("구의 반지름을 입력하시오 : ");
	scanf_s("%lf", &radius);

	A = 4.0 * PI * radius * radius;
	V = (4.0 / 3.0) * PI * radius * radius * radius;

	printf("표면적은 %f입니다.\n", A);
	printf("체적은 %f입니다.\n", V);
	return 0;
}