#include <stdio.h>

int main(void)
{
	int m, hour, min, sec;
	double km = 0;

	printf("�Ÿ��� ���ͷ� �Է��Ͻÿ� : ");
	scanf_s("%d", &m);

	printf("�ð��� �Է��Ͻÿ� : ");
	scanf_s("%d", &hour);

	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d", &min);

	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &sec);

	km = (double)m / (hour + min / 60.0 + sec / 60.0 / 60.0) / 1000;

	printf("�ӵ� : %lf\n", km);
	return 0;
}