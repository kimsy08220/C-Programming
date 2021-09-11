#include <stdio.h>   
#include <time.h>
#include <stdlib.h>


int b_rand()
{
	return rand() % 2;
}

int main(void)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
		printf("%d ", b_rand());
	printf("\n");
	return 0;
}