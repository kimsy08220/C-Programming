#include <stdio.h>

void array_copy(int *A, int *B, int size)
{
	printf("A[] = ");
	for (int i = 0; i < size; i++)
		printf("%d ", A[i]);

	printf("\nB[] = ");
	for (int i = 0; i < size; i++)
	{
		B[i] = A[i];
		printf("%d ", B[i]);
	}
	printf("\n");
}

int main(void)
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[10] = { 0 };

	array_copy(A, B, 10);
	return 0;
}