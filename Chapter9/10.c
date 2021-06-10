#include <stdio.h>

double recursive(double x)
{
	if (x == 1)
		return 1;
	else
		return 1 / x + recursive(x-1);
}

int main(void)
{
	printf("%lf\n", recursive(10));
	return 0;
}