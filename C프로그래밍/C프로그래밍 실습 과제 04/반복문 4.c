#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}