#include <stdio.h>

int main(void)
{
	double kor, eng, math, score = 0, avg = 0;

	printf("3과목의 점수를 입력한다 : ");
	scanf_s("%lf%lf%lf", &kor, &eng, &math);
	
	score = kor + eng + math;
	printf("총점 = %.2lf\n", score);
	
	avg = score / 3;
	printf("평균 = %.2lf\n", avg);
	return 0;
}