#include <stdio.h>
#include <string.h>

int str_chr(char* s, int c)
{
	int cnt = 0;

	for (int i = 0; i < strlen(s); i++)
		if (s[i] == c)
			cnt++;
	return cnt;
}

int main(void)
{
	char s[100];
	char c;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(s);

	printf("������ �� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c, 1);

	printf("%c�� ���� : %d\n", c, str_chr(s, c));
	return 0;
}