#include <stdio.h>

int main(void)
{
	double width, heigth, area;
	printf("�غ�, ���� : ");
	scanf_s("%lf%lf", &width, &heigth);

	area = (width * heigth) / 2;

	printf("�غ� = %.2lfcm, ���� = %.2lfcm�� �ﰢ���� ���� = %.2lfcm��\n", width, heigth, area);
	return 0;
}