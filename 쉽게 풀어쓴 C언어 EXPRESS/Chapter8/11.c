#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double f_rand()
{
	return rand() / (double)RAND_MAX;
}

int main(void)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
		printf("%lf ", f_rand());
	printf("\n");
	return 0;
}