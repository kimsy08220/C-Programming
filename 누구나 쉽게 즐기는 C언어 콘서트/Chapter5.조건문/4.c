#include <stdio.h>

int main(void)
{
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c, sizeof(c));

	if ('A' <= c && c <= 'z')
		printf("���ĺ��Դϴ�.\n");
	else if ('0' <= c && c <= '9')
		printf("�����Դϴ�.\n");
	else
		printf("Ư�������Դϴ�.\n");

	return 0;
}