#include <stdio.h>

int main(void)
{
	double width, heigth, area;
	printf("밑변, 높이 : ");
	scanf_s("%lf%lf", &width, &heigth);

	area = (width * heigth) / 2;

	printf("밑변 = %.2lfcm, 높이 = %.2lfcm인 삼각형의 면적 = %.2lfcm²\n", width, heigth, area);
	return 0;
}