#include <stdio.h>
#define PI 3.14

int main(void)
{
	double radius, distance, angle;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &distance);

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &angle);

	radius = distance * 360 / (angle * 2 * PI); 
	printf("������ �������� %f\n", radius);
	return 0;
}