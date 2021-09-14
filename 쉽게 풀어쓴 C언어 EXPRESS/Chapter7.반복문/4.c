#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 7; i++)
	{
		for (int k = 0; k < 6 - i; k++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}