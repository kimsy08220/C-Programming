#include <stdio.h>

int main(void)
{
	int i = 0, sum = 0;
	while (sum <= 10000)
	{
		i++;
		sum += i;
	}

	printf("1부터 %d까지의 합이 %d입니다.", i-1, sum-i);
	return 0;
}