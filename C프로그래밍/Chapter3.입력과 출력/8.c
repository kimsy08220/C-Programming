#include <stdio.h>

int main(void)
{
	int n8, n16, num = 0;

	printf("8���� 16������ ������� �Է��ϼ��� : ");
	scanf_s("%o%x", &n8, &n16);

	num = n8 + n16;

	printf("%o(8) + %x(16) = %d\n", n8, n16, num);
	return 0;
}