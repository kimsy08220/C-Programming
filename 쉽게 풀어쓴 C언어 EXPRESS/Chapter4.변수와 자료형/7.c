#include <stdio.h>

int main(void)
{
	double m, v, E;

	printf("����(kg) : ");
	scanf_s("%lf", &m);

	printf("�ӵ�(m/s) : ");
	scanf_s("%lf", &v);

	E = m * v * v / 2;
	printf("�������(J) : %f\n", E);

	return 0;
}