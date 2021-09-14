#include <stdio.h>

void scalar_mult(int a[][3], int scalar)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] *= 2;
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	scalar_mult(a, 3);
	return 0;
}