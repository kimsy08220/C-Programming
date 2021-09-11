#include <stdio.h>

int array_sum(int* A, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += A[i];
	printf("월급의 합 = %d\n", sum);
}

int main(void)
{
	int A[10] = {1,2,3,0};

	printf("A[] = ");
	for (int i = 0; i < 10; i++)
		printf("%d ", A[i]);
	printf("\n");
	array_sum(A, 10);
	return 0;
}