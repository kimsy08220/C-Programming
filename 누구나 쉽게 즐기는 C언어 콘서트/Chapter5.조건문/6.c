#include <stdio.h>

int main(void)
{
	char c;

	printf("��ȣ���� ���� �Է�(R, G, Y) : ");
	scanf_s("%c", &c, sizeof(c));

	if (c == 'r' || c == 'R')
		printf("����!\n");
	else if (c == 'g' || c == 'G')
		printf("����!\n");
	else if (c == 'y' || c == 'Y')
		printf("����!\n");
	else
		printf("�߸��� �Է��Դϴ�!\n");
	return 0;
}