#include <stdio.h>

int main(void)
{
	double C, F;

	printf("ȭ������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &F);

	//C = 5 * (F - 32) / 9;
	C = (5.0 / 9.0) * (F - 32.0);

	printf("�������� %lf���Դϴ�.\n", C);

	return 0;
}