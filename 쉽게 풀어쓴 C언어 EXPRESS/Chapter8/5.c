#include <stdio.h>

int round(double num)
{
	return (int)(num + 0.5);
}

int main(void)
{
	double num;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);

	printf("�ݿø��� ���� %d�Դϴ�.\n", round(num));
	return 0;
}