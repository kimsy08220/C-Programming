#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)
#include <math.h>	// 여러 수학 함수들이 선언된 헤더파일을 포함시켜 사용 (round 등)

int main(void)
{
	int test_score, assignment_score, attendance_score;	// 각각 시험 성적, 과제 성적, 출석 성적을 저장하는 정수형 변수
	int error = 0, score_sum = 0; // 잘못된 값으로 입력 오류가 나면 count 하는 정수형 변수, 시험, 과제, 출석 성적을 더한 값을 저장하는 정수형 변수
	double percentage = 0.0;	// 합계값의 백분율을 저장하는 실수형 변수

	printf("-------------------------------------------------------------------------------------------------\n");
	printf("					성적 산출 프로그램\n");
	printf("-------------------------------------------------------------------------------------------------\n");

	for (int i = 1; i <= 10; i++) {	// 10명의 성적 산출을 하는 for문
		// 시험 성적 입력
		printf("학생%d의 시험 성적(0~100) : ", i);	// 학생을 구분하기 위해 i를 출력
		scanf_s("%d", &test_score);

		while (0 > test_score || test_score > 100) {	// 시험 성적이 0~100 사이 정수값이 아닐 경우 동작하는 while문
			printf("시험 성적은 0~100 사이 정수값으로 다시 입력해주세요!\n");
			error++;	// 잘못된 값으로 입력 오류가 나면 error 1 증가

			if (error >= 3) {	// 3번 이상 잘못된 값으로 입력 오류가 날 경우
				printf("\n잘못된 점수 입력 오류로 프로그램 종료함\n");
				printf("-------------------------------------------------------------------------------------------------\n");
				return 0;	// 정상종료, 즉 프로그램 종료
			}
			printf("학생%d의 시험 성적(0~100) : ", i);	// 다시 재입력 받음
			scanf_s("%d", &test_score);
		}

		// 과제 성적 입력
		printf("학생%d의 과제 성적(0~50) : ", i);	// 학생을 구분하기 위해 i를 출력
		scanf_s("%d", &assignment_score);

		while (0 > assignment_score || assignment_score > 50) {	// 과제 성적이 0~50 사이 정수값이 아닐 경우 동작하는 while문
			printf("과제 성적은 0~50 사이 정수값으로 다시 입력해주세요!\n");
			error++;	// 잘못된 값으로 입력 오류가 나면 error 1 증가

			if (error >= 3) {	// 3번 이상 잘못된 값으로 입력 오류가 날 경우
				printf("\n잘못된 점수 입력 오류로 프로그램 종료함\n");
				printf("-------------------------------------------------------------------------------------------------\n");
				return 0;	// 정상종료, 즉 프로그램 종료
			}
			printf("학생%d의 과제 성적(0~50) : ", i);	// 다시 재입력 받음
			scanf_s("%d", &assignment_score);
		}

		// 출석 성적 입력
		printf("학생%d의 출석 성적(0~45) : ", i);	// 학생을 구분하기 위해 i를 출력
		scanf_s("%d", &attendance_score);

		while (0 > attendance_score || attendance_score > 45) {	// 과제 성적이 0~45 사이 정수값이 아닐 경우 동작하는 while문
			printf("출석 성적은 0~45 사이 정수값으로 다시 입력해주세요!\n");
			error++;	// 잘못된 값으로 입력 오류가 나면 error 1 증가

			if (error >= 3) {	// 3번 이상 잘못된 값으로 입력 오류가 날 경우
				printf("\n잘못된 점수 입력 오류로 프로그램 종료함\n");
				printf("-------------------------------------------------------------------------------------------------\n");
				return 0;	// 정상종료, 즉 프로그램 종료
			}
			printf("학생%d의 출석 성적(0~45) : ", i);	// 다시 재입력 받음
			scanf_s("%d", &attendance_score);
		}
		score_sum = test_score + assignment_score + attendance_score;
		percentage = score_sum / 195.0 * 100;	// 백분율을 구하기 위해 시험, 과제, 출석 점수를 다 더한 값을 195.0으로 나눠 100을 곱함
		percentage = round(percentage);		// 백분율을 반올림하여 percentage에 저장, round() : math 헤더파일에 선언된 반올림 함수

		if (attendance_score < 30) // 출석 점수가 30 미만일 경우, 무조건 학점을 F로 측정
			printf("[학생%d, 시험성적 : %d, 과제 성적 : %d, 출석 성적 : %d, 합계 : %d, 백분율 : %.0lf, 학점 : F]\n", i, test_score, assignment_score, attendance_score, score_sum, percentage);
		else {	// 출석 점수가 30 이상일 경우, 백분율을 구하여 학점을 측정
			printf("[학생%d, 시험성적 : %d, 과제 성적 : %d, 출석 성적 : %d, 합계 : %d, 백분율 : %.0lf, ", i, test_score, assignment_score, attendance_score, score_sum, percentage);

			// 구간별로 학점을 부여하여 출력
			// 0~40 : F, 41~50 : C, 51~60 : C+, 61~70 : B, 71~80 : B+, 81~90 : A, 91~100 : A+, 이외의 값 : X
			if (0 <= percentage && percentage <= 40)
				printf("학점 : F]\n");
			else if (percentage <= 50)
				printf("학점 : C]\n");
			else if (percentage <= 60)
				printf("학점 : C+]\n");
			else if (percentage <= 70)
				printf("학점 : B]\n");
			else if (percentage <= 80)
				printf("학점 : B+]\n");
			else if (percentage <= 90)
				printf("학점 : A]\n");
			else if (percentage <= 100)
				printf("학점 : A+]\n");
			else
				printf("학점 : X]\n");
		}
		printf("-------------------------------------------------------------------------------------------------\n");
	}
	return 0;	// 정상종료
}









