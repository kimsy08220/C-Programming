#include <stdio.h>

int main(void)
{
	double n1, n2, sum = 0;
	double* dptr1, * dptr2;

	printf("실수형 변수 n1, n2 입력 : ");
	scanf_s("%lf%lf", &n1, &n2);

	dptr1 = &n1;
	dptr2 = &n2;

	sum = *dptr1 + *dptr2;

	printf("n1 + n2 = %lf\n", sum);

	return 0;
}