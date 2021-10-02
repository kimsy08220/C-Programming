#include <stdio.h>

int main(void)
{
	double x = 2, y = 3 * x * x + 7 * x + 9;

	printf("y=3.0*x*x + 7.0*x + 9.0=%lf\n", y);
	return 0;
}