#include <stdio.h>
#define SIZE 5

int main(void)
{
	int quiz[SIZE];
	int cnt = 0, sum = 0;
	double avg;

	// 배열의 입력 
	printf("%d명의 점수를 순서대로 입력하세요.\n\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d번의 퀴즈 점수는? ", i + 1);
		scanf_s("%d", &quiz[i]);
	}

	// 배열 평균 구하기
	for (int i = 0; i < SIZE; i++)
		sum += quiz[i];

	avg = (double) sum / SIZE;

	// 평균 미만자 수 구하기
	for (int i = 0; i < SIZE; i++)
		if (quiz[i] < avg)
			cnt++;

	// 결과 출력
	printf("===============================\n");
	printf(" 번호	점수	평균과의 차이\n");
	printf("===============================\n");
	for (int i = 0; i < SIZE; i++)
		printf("  %2d	 %2d	   %5.1lf\n", i + 1, quiz[i], quiz[i] - avg);
	printf("===============================\n");
	printf("평균 %.1lf점\n", avg);
	printf("===============================\n");
	printf("평균 미만 : %d명\n", cnt);
	return 0;
}