#include <stdio.h>

int main(void)
{
	double x, y = 0;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);

	y = (x * x * x - 20) / (x - 7);

	printf("������ ���� %lf�Դϴ�.\n", y);
	return 0;
}