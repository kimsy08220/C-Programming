#include <stdio.h>

int main(void)
{
	double num, inch, cm;
	char c;

	printf("�Է� ������ cm�̸� \'c\'�� \'C\'��, inch�̸� \'i\'�� \'I\'�� �Է��ϼ���.\n");
	printf("�Է� ����  : ");
	scanf_s("%c", &c, sizeof(c));

	if (c == 'c' || c == 'C')
	{
		printf("�Է� ��  : ");
		scanf_s("%lf", &cm);

		inch = cm / 2.54;
		printf("�Է��� %.2lfcm�� %.2lfinch�Դϴ�.\n", cm, inch);
	}
	else if (c == 'i' || c == 'I')
	{
		printf("�Է� ��  : ");
		scanf_s("%lf", &inch);

		cm = 2.54 * inch;
		printf("�Է��� %.2lfinch�� %.2lfcm�Դϴ�.\n", inch, cm);

	}
	else
		printf("�߸��� ���Դϴ�.\n");
	return 0;
}