#include <stdio.h>		// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)
#include <stdlib.h>		// 문자열 변환, 난수 생성 등의 함수가 선언된 헤더파일을 포함시켜 사용 (srand, rand 등)
#include <time.h>		// 날짜와 시간 조작 함수가 선언된 헤더파일을 포함시켜 사용 (time 등)

int eng_score[100] = { 0 };	// 영어 시험 점수를 저장하는 정수형 배열
int eng_rank[100] = { 0 };	// 영어 시험 순위를 저장하는 정수형 배열

// eng_score 배열을 rand 함수로, eng_rank 배열은 1로 초기화하는 함수
void eng_rand()
{
	srand(time(NULL));	// 항상 다른 난수를 생성하기 위한 함수를 선언
	for (int i = 0; i < 100; i++) {
		eng_score[i] = rand() % 101;	// rand() % 101 : 0 ~ 100까지의 난수, eng_score 배열에 0~100까지의 난수를 저장
		eng_rank[i] = 1;		// eng_rank 배열에 무조건 1 저장
		if (i % 10 == 0)
			printf("\n");
		printf("%3d ", eng_score[i]);	// 어떤 수가 생성되었는지 확인용으로 출력
	}
}

// 내림차순으로 정렬하는 함수
void sort()
{
	int temp = 0;	// 임의의 수를 저장하기 위한 정수형 변수
	for (int i = 0; i < 100; i++) {
		for (int j = i; j < 100; j++) {
			if (eng_score[i] < eng_score[j]) {	// 값의 자리를 바꿈으로써 내림차순으로 정렬
				temp = eng_score[i];
				eng_score[i] = eng_score[j];
				eng_score[j] = temp;
			}
		}
	}
}

// 동일 등수인 경우 처리해주는 함수
void same_rank()
{
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)   
			if (eng_score[i] < eng_score[j])	// eng_score[i]보다 점수가 높을 경우
				eng_rank[i]++;		// eng_rank[i] 증가시킴으로써 동일 등수 처리
	}
}

// 최종 석차를 보여주는 함수
void test_result()
{
	// 구간별로 학생에게 석차를 부여
	for (int i = 0; i < 100; i++) {
		if (i % 10 == 0)
			printf("\n");

		if (eng_rank[i] < 30) 
			printf("[%3d, %2d, A] ", eng_score[i], eng_rank[i]);
		else if (eng_rank[i] < 50) 
			printf("[%3d, %2d, B] ", eng_score[i], eng_rank[i]);
		else if (eng_rank[i] < 70)
			printf("[%3d, %2d, C] ", eng_score[i], eng_rank[i]);
		else if (eng_rank[i] < 90) 
			printf("[%3d, %2d, D] ", eng_score[i], eng_rank[i]);
		else 
			printf("[%3d,%3d, F] ", eng_score[i], eng_rank[i]);
		if (i == 99)
			printf("\n\n");
	}
}

// 메인 함수(프로그램 시작)
int main(void)
{
	eng_rand();		// 점수와 석차를 초기화하는 함수 호출
	sort();			// 점수를 내림차순으로 정렬하는 함수 호출
	same_rank();	// 동일 등수를 처리하는 함수 호출

	printf("\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("						    영어 성적 산출 프로그램\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	test_result();	// 최종 석차를 보여주는 함수 호출
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

	return 0;
}










