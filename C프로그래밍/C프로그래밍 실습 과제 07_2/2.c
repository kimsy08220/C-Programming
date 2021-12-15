#include <stdio.h>

int main(void)
{
	int data[10];
	int* iptr;

	for (int i = 0; i < 10; i++) {
		printf("*(data + %d) = ", i);
		scanf_s("%d", (data + i));
	}

	iptr = data;

	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("*(iptr + %d) = %d\n", i, *(iptr + i));
	return 0;
}