#include <stdio.h>

int main(void)
{
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c, sizeof(c));

	if ('A' <= c && c <= 'Z')
		printf("�빮���Դϴ�.\n");
	else if ('a' <= c && c <= 'z')
		printf("�ҹ����Դϴ�.\n");
	else
		printf("���ĺ��� �Է����ּ���.\n");

	return 0;
}