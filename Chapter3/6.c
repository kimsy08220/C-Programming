#include <stdio.h>

int main(void)
{
	double kg, moon_kg = 0;

	printf("�����Ը� �Է��ϼ���(���� : kg) : ");
	scanf_s("%lf", &kg);

	moon_kg = kg * 0.17;

	printf("�޿����� �����Դ� %lf�Դϴ�.\n", moon_kg);

	return 0;
}