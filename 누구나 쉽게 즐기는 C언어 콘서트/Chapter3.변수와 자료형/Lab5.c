#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double radius, area;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	area = radius * radius * PI;

	printf("���� ���� : %lf\n", area);
	return 0;
}