#include <stdio.h>
#define PI 3.141592

double cal_area(double radius)
{
	return PI * radius * radius;
}

int main(void)
{
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	printf("���� ������ %lf�Դϴ�.\n", cal_area(radius));
	return 0;
}