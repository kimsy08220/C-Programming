#include <stdio.h>

int main(void)
{
	int i = 0, sum = 0;
	while (sum <= 10000)
	{
		i++;
		sum += i;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", i-1, sum-i);
	return 0;
}