#include <stdio.h>

int search(int* A, int size, int search_value)
{
	printf("������ %d������ ����� �ε��� = ", search_value);
	for (int i = 0; i < size; i++)
		if (A[i] == search_value)
			printf("%d ", i);
}

int main(void)
{
	int A[10] = {100,200,300,400,500,600,700,800,900,1000};

	search(A, 10, 200);
	printf("\n");
	return 0;
}