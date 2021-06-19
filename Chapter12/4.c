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
	char str[100];
	
	printf("문자열을 입력하시오 : ");
	gets(str);
	for (char c = 'a'; c < 'z'; c++)
		printf("%c : %d\n", c, str_chr(str, c));

	return 0;
}