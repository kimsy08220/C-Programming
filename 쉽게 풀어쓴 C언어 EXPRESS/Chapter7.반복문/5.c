#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
			printf("%d ", j+1);
		printf("\n");
	}
	return 0;
}