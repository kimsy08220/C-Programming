#include <stdio.h>

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
			printf("%d ", i);
		}
	}

	printf("\n1~100 사이 3의 배수 합 : %d\n", sum);
	return 0;
}