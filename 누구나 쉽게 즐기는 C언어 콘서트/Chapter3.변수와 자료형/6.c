// 1) #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c1, c2, c3;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c %c %c", &c1, sizeof(c1), &c2, sizeof(c2), &c3, sizeof(c3));

	printf("���� : %c %c %c\n", c3, c2, c1);

	return 0;
}