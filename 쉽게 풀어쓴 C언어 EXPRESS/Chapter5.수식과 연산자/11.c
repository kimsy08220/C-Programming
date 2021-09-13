#include <stdio.h>
#define PI 3.14

int main(void)
{
	double radius, distance, angle;

	printf("거리를 입력하시오 : ");
	scanf_s("%lf", &distance);

	printf("각도를 입력하시오 : ");
	scanf_s("%lf", &angle);

	radius = distance * 360 / (angle * 2 * PI); 
	printf("지구의 반지름은 %f\n", radius);
	return 0;
}