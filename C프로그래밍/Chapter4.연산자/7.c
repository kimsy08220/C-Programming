#include <stdio.h>

int main(void)
{
	int radius, height;
	double area = 0, pi = 3.141592;

	printf("���⵿�� �ظ��� ������, ���̸� �Է��ϼ���(cm����) : ");
	scanf_s("%d%d", &radius, &height);

	area = pi * radius * radius * height; 

	printf(">> ����� ������� ���Ǵ� %.1lfcm���Դϴ�.\n", area);
	return 0;
}