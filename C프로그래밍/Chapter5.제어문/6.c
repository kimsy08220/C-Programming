#include <stdio.h>

int main(void)
{
	char c;

	printf("���� �Է� : ");
	//c = getchar();
	scanf_s("%c", &c, sizeof(c));

	if (c >= 'A' && c <= 'Z')
		printf("���ĺ� �빮���Դϴ�.\n");
	else if (c >= 'a' && c <= 'z')
		printf("���ĺ� �ҹ����Դϴ�.\n");
	else if (c >= '0' && c <= '9')
		printf("�����Դϴ�.\n");

	return 0;
}