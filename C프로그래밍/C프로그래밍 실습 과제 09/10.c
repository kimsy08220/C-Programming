#include <stdio.h>
#include <stdlib.h>

void input_output(int *score, int size);

int main(void)
{
	int size, sum;
	int* score;

	printf("학생수는? ");
	scanf_s("%d", &size);

	score = (int*)malloc(sizeof(int) * size);

	if (score == NULL) {
		printf("동적 기억장소 할당에 실패하였습니다.\n");
		exit(1);
	}

	input_output(score, size);
	free(score);
	return 0;
}

void input_output(int* score, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		printf("%d번째 학생의 점수는? ", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	printf("\n%d명의 평균 : %.1lf\n", size, (double)sum / size);
}