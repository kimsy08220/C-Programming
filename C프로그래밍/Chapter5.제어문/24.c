#include <stdio.h>

int main(void)
{
	int x, y, r = 0;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ� ������� %d�Դϴ�.\n", x);
	return 0;
}