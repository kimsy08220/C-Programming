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
	printf("변환된 문자열 : %s\n", s);
}

int main(void)
{
	char str[100];

	printf("문자열을 입력하시오 : ");
	gets(str);

	str_upper(str);
	return 0;
}