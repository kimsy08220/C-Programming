#include <stdio.h>
#define PI 3.14	

int main(void)
{
	double radius, A, V;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	A = 4.0 * PI * radius * radius;
	V = (4.0 / 3.0) * PI * radius * radius * radius;

	printf("ǥ������ %f�Դϴ�.\n", A);
	printf("ü���� %f�Դϴ�.\n", V);
	return 0;
}