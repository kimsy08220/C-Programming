#include <stdio.h>
#include <string.h>

void str_upper(char *s)
{
	int cnt = 0;

	for (int i = 0; i < strlen(s); i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	printf("��ȯ�� ���ڿ� : %s\n", s);
}

int main(void)
{
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(str);

	str_upper(str);
	return 0;
}