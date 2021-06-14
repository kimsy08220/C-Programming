#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size)
{
	for (int i = 0; i < size; i++)
	{
		A[i] = rand();
		printf("%d ", A[i]);
	}
}

int main(void)
{
	int A[10];
	srand((unsigned)time(NULL));
	array_fill(A, 10);
	printf("\n");
	return 0;
}