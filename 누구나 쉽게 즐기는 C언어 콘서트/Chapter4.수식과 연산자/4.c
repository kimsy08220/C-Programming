#include <stdio.h>

int main(void)
{
	double kor, eng, math, score = 0, avg = 0;

	printf("3������ ������ �Է��Ѵ� : ");
	scanf_s("%lf%lf%lf", &kor, &eng, &math);
	
	score = kor + eng + math;
	printf("���� = %.2lf\n", score);
	
	avg = score / 3;
	printf("��� = %.2lf\n", avg);
	return 0;
}