#include <stdio.h>

int main(void)
{
	double r, cm, cm��, cm��, pi = 3.141592;

	printf("������(cm)�� �Է��ϼ��� : ");
	scanf_s("%lf", &r);

	cm = 2 * r * pi;
	cm�� = r * r * pi;
	cm�� = (4 / 3.0) * r * r * r * pi;

	printf("�ѷ� = %7.2lf cm\n", cm);
	printf("���� = %7.2lf cm��\n", cm��);
	printf("���� = %7.2lf cm��\n", cm��);

	return 0;
}