#include <stdio.h>

int main(void)
{
	double kg, m, bmi = 0;

	printf("ü���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &kg);
	printf("������ �Է��Ͻÿ�(���� : ����) : ");
	scanf_s("%lf", &m);

	bmi = kg / (m * m);
	printf("BMI : %.2lf\n", bmi);
	return 0;
}