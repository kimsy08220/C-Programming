#include <stdio.h>

void array_add(int *A, int *B, int *C, int size)
{
	for (int i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

int main(void)
{
	int A[10] = {1,2,3,0};
	int B[10] = {0};
	int C[10] = {0};

	array_add(A, B, C, 10);

	printf("A[] = ");
	for (int i = 0; i < 10; i++)
		printf("%d ", A[i]);

	printf("\nB[] = ");
	for (int i = 0; i < 10; i++)
		printf("%d ", B[i]);

	printf("\nC[] = ");
	for (int i = 0; i < 10; i++)
		printf("%d ", C[i]);
	printf("\n");
	return 0;
}