#include <stdio.h>

double square(double n)
{
	return n * n;
}

int main(void)
{
	double num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);
	
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", num, square(num));
	return 0;
}