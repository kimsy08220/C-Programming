#include <stdio.h>

int main(void)
{
	double F, C;

	printf("È­¾¾¿Âµµ = ");
	scanf_s("%lf", &F);

	C = (F - 32) * 5.0 / 9.0;
	
	printf("¼·¾¾¿Âµµ = %lf\n", C);

	return 0;
}