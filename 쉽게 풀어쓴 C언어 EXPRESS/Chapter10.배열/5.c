#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int max = 0, n[100] = {0};

	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 100; i++)
		n[rand() % 10]++;
	
	for (int i = 0; i < 9; i++)
	{
		printf("%d %d\n", i, n[i]);
		if (n[i] > n[max])
			max = i;
	}

	printf("가장 많이 나온 수 = %d\n", max);
	return 0;
}