#include <stdio.h>

void array_printf(int* A, int size)
{
	printf("A[] = { ");
	for (int i = 0; i < size; i++)
	{
		A[i] = i + 1;
		printf("%d ", A[i]);
	}
	printf(" }\n");
}

int main(void)
{
	int A[5] = {0};
	array_printf(A, 5);
	return 0;
}