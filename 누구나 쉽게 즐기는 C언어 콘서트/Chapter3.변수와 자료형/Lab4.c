#include <stdio.h>

int main(void)
{
	double F, C;

	printf("ȭ���µ� = ");
	scanf_s("%lf", &F);

	C = (F - 32) * 5.0 / 9.0;
	
	printf("�����µ� = %lf\n", C);

	return 0;
}