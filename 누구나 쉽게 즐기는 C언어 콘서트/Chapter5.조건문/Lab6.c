#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double d = 0, x1 = 0, x2 = 0;

	printf("��� a,b,c�� �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (d == 0)
	{
		x1 = -c / a;
		printf("2���� �� ���� = %lf\n", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		printf("ù ��° �Ǳ� = %lf\n", x1);
		printf("�� ��° �Ǳ� = %lf\n", x2);
	}
	else
		printf("������Դϴ�.\n");

	return 0;
}