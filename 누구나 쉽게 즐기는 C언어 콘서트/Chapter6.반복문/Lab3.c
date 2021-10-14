#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number, cnt = 0, result = 0;

	srand(time(NULL));
	result = rand() % 100 + 1;

	do {

		printf("정답을 추측하여 보시오 : ");
		scanf_s("%d", &number);
		cnt++;

		if (number < result)
			printf("제시한 정수가 낮습니다.\n");
		else if (number > result)
			printf("제시한 정수가 높습니다.\n");
		else {
			printf("축하합니다.시도횟수 = %d\n", cnt);
		}
	} while (number != result);

	return 0;
}