#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

int b_rand()
{
	return rand() % 2;
}

int main(void)
{
	int num;
	char c;
	srand((unsigned)time(NULL));

	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf_s("%d", &num);
		if (b_rand() == num)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까?(y 또는 n) : ");
		scanf_s(" %c", &c, 1);

		if (c == 'n')
			break;
	}
	return 0;
}