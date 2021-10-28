#include <stdio.h>

int main(void)
{
	// (1)
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i == 1 || i == 9)
				printf("*");
			else
			{
				if (j == 1 || j == 9)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// (2)
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
			printf(" ");
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= i; j++)
			printf(" ");
		for (int k = 1; k <= -2 * i + 9; k++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	// (3)
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
	printf("\n");

	// (4)
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 10 - i; j++)
			printf("%d", j);
		printf("\n");
	}
	printf("\n");

	return 0;
}