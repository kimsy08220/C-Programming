#include <stdio.h>

int main(void)
{
	int r;
	double length;

	printf("�ѷ��� ���� ���� ��������?");
	scanf_s("%d", &r);
	length = 2 * 3.14 * r;
	printf("�������� %d�� ���� �ѷ��� %.2llf\n", r, length);

	return 0;
}