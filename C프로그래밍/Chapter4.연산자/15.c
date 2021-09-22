#include <stdio.h>

int main(void)
{
	int kor, eng, math, attend;
	double avg = 0;
	char name[10];

	printf("학생의 이름 : ");
	gets_s(name, 10);

	printf("국어 : ");
	scanf_s("%d", &kor);
	printf("영어 : ");
	scanf_s("%d", &eng);
	printf("수학 : ");
	scanf_s("%d", &math);
	printf("출결 : ");
	scanf_s("%d", &attend);

	avg = (kor + eng + math + attend) / 4.0 ;

	printf("\n----------------------------------------\n");
	avg >= 70 && avg <= 80 ? printf("	[%s]학생 >> 합격!", name) : printf("	[%s]학생 >> 불합격!", name);
	printf("\n----------------------------------------\n");
	printf("	네 과목의 평균 : %.1lf\n", avg);
	printf("	출결 점수 : %d\n", attend);
	printf("----------------------------------------\n");
	
	return 0;
}