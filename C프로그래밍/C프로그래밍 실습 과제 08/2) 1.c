#include <stdio.h>

void swap(int* n1, int* n2);

int main(void)
{
	int n1, n2;

	printf("n1 입력 : ");
	scanf_s("%d", &n1);
	printf("n2 입력 : ");
	scanf_s("%d", &n2);

	swap(&n1, &n2);
	printf("n1 : %d, n2 : %d\n", n1, n2);
	return 0;
}

void swap(int* n1, int* n2)
{
	int temp = 0;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}