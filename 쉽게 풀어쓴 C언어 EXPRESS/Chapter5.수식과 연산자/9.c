#include <stdio.h>

int main(void)
{
	double AE, AC, BC, DE;

	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &BC);

	printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &AC);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &AE);

	DE = AE * BC / AC;

	printf("�Ƕ�̵��� ���̴� %f�Դϴ�.\n", DE);
	return 0;
}