#include <stdio.h>

int main(void)
{
	int sum = 0;
	int* ptr;
	ptr = &sum;

	printf("sum = %d\n", *ptr);
	return 0;
}