#include <stdio.h>

int main(void)
{
	double kg, lb = 0;

	printf("kg������ ���Ը� �Է��ϼ��� : ");
	scanf_s("%lf", &kg);

	lb = 1 / 0.45359237 * kg;

	printf("�Է��Ͻ� ���� %.1lfkg�� %.1lflb�� �ش��մϴ�.\n", kg, lb);
	return 0;
}