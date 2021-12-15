#include <stdio.h>

int main(void)
{
	int data[10];
	int* iptr;

	iptr = data;

	for (int i = 0; i < 10; i++) {
		printf("*(iptr + %d) = ", i);
		scanf_s("%d", (iptr + i));
	}

	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("*(iptr + %d) = %d\n", i, *(iptr + i));
	return 0;
}