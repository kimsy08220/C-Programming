#include <stdio.h>

int main(void)
{
	double n1, n2, n3, sum = 0, avg = 0;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &n1);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &n2);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &n3);

	sum = n1 + n2 + n3;
	avg = sum / 3;

	printf("���� %lf�̰� ����� %lf�Դϴ�.\n", sum, avg);

	return 0;
}