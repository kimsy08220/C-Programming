#include <stdio.h>

void array_copy(int a[], int b[])
{
	for (int i = 0; i < 10; i++)
		b[i] = a[i];
}

int main(void)
{
	int a[10] = { 1,2,3 }, b[10] = { 0 };

	array_copy(a, b);

	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}