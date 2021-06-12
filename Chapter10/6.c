#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n[3][5] = { {12,56,32,16,98}, {99,56,34,41,3}, {65,3,87,78,21} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			sum += n[i][j];
		printf("%d행의 합계 : %d\n", i+1, sum);
		sum = 0;
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			sum += n[j][i];

		printf("%d열의 합계 : %d\n", i + 1, sum);
		sum = 0;
	}

	return 0;
}