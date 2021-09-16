#include <stdio.h>

int main(void)
{
	double r, cm, cm², cm³, pi = 3.141592;

	printf("반지름(cm)을 입력하세요 : ");
	scanf_s("%lf", &r);

	cm = 2 * r * pi;
	cm² = r * r * pi;
	cm³ = (4 / 3.0) * r * r * r * pi;

	printf("둘레 = %7.2lf cm\n", cm);
	printf("면적 = %7.2lf cm²\n", cm²);
	printf("부피 = %7.2lf cm³\n", cm³);

	return 0;
}