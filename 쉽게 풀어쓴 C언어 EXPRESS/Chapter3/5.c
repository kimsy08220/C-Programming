#include <stdio.h>

int main(void)
{
	double x, result = 0;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf_s("%lf", &x);

	result = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %lf\n", result);

	return 0;
}