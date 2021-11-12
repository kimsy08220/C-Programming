#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)
#include <stdlib.h>	// 문자열 변환, 난수 생성 등의 함수가 선언된 헤더파일을 포함시켜 사용 (srand, rand 등)
#include <time.h>	// 날짜와 시간 조작 함수가 선언된 헤더파일을 포함시켜 사용 (time 등)

// 배열의 최대값과 평균값을 구하는 함수
void max_ave(int array[], int *max, double *ave)
{
	// 최대값 구하기
	*max = array[0];	// max를 array[0]이라고 가정
	for (int i = 1; i < 100; i++)
		if (*max < array[i])	// max보다 큰 값이 있을 경우
			*max = array[i];	// max를 해당 배열의 값으로 변경

	// 평균값 구하기
	int sum = 0;		// 배열의 합을 저장하는 정수형 변수
	for (int i = 0; i < 100; i++)
		sum += array[i];
	*ave = sum / 100.0;	
}

// 메인 함수(프로그램 시작)
int main(void)
{
	int array[100] = { 0 };	// 배열의 값을 저장하는 정수형 배열
	int max = 0;			// 배열의 최대값을 저장하는 정수형 변수
	double ave = 0;			// 배열의 평균값을 저장하는 실수형 변수

	srand(time(NULL));		// 항상 다른 난수를 생성하기 위한 함수를 선언
	printf("----------------------------------------\n");
	printf("	    100개의 난수 생성\n");
	printf("----------------------------------------\n");
	// 100개의 난수(0~100) 생성
	for (int i = 0; i < 100; i++) {
		array[i] = rand() % 101;
		if (i % 10 == 0 && i != 0)
			printf("\n");
		printf("%3d ", array[i]);
	}
	printf("\n");
	printf("----------------------------------------\n");

	max_ave(array, &max, &ave);	// 배열의 최대값과 평균값을 구하는 함수 호출

	// 참조에 의한 호출로 받은 값 출력
	printf("100개의 요소 값 가운데 최대값 = %d\n", max);	
	printf("100개의 요소 값들의 산술 평균값 = %.2lf\n\n", ave);
	return 0;
}



