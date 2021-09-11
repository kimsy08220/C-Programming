#include <stdio.h>

int check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	else
		return 0;
}

int main(void)
{
	char ch;

	printf("문자를 입력하시오 : ");
	ch = getchar();
	
	if(check_alpha(ch))
		printf("%c는 알파벳 문자입니다.\n", ch);
	else
		printf("%c는 알파벳 문자가 아닙니다.\n", ch);
	return 0;
}