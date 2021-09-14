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

	printf("문자열을 입력하시오 : ");
	gets(s);

	printf("개수를 셀 문자를 입력하시오 : ");
	scanf_s("%c", &c, 1);

	printf("%c의 개수 : %d\n", c, str_chr(s, c));
	return 0;
}