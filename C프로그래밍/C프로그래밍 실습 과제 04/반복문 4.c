#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}