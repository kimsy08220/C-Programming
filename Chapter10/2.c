#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_num()
{
	return rand() % RAND_MAX;
}

int main(void)
{
	int max = 0, min = 100;
	int array[10] = { 0 };

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand();
		if (array[i] > max)
			max = array[i];
		else
			min = array[i];
	}
	printf("�ִ밪�� %d\n�ּҰ��� %d\n", max, min);
	return 0;
}