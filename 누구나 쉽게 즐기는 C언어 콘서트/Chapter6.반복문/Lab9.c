#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num, result = 0;

	printf("산수 문제를 자동으로 출제합니다.\n");

	while (1) {
		srand(time(NULL));
		int x = rand() % 100;
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf_s("%d", &num);

		result = x + y;

		if (num == result) {
			printf("맞았습니다.\n");
			break;
		}
		else
			printf("틀렸습니다.\n");
		srand(time(NULL));
	}
	return 0;
}