#include <stdio.h>

int main(void)
{
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &c);

	printf("%c�� ASCII �ڵ� ���� %d�Դϴ�.\n", c, c);
	return 0;
}