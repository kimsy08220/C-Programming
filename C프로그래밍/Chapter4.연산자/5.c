#include <stdio.h>

int main(void)
{
	double cm, feet = 0, inch = 0;

	printf("Ű(cm)�� �Է��ϼ��� : ");
	scanf_s("%lf", &cm);

	inch = 1 / 2.54 * cm;
	feet = 1 / 12.0 * inch;

	printf("�Է��Ͻ� Ű %.2lf��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�.\n", cm, feet, inch);
	return 0;
}