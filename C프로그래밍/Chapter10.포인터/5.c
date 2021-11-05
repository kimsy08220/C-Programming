#include <stdio.h>

int main(void)
{
	int index = 0, * ptr;
	ptr = &index;
	index++;
	*ptr = *ptr + 1;
	printf("index = %d, *ptr = %d\n", index, *ptr);

	return 0;
}