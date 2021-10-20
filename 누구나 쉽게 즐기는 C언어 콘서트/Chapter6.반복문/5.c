#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			printf("%d ", i);
	printf("\n");

	return 0;
}