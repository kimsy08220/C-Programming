#include <stdio.h>

int main(void)
{
	char c;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c, sizeof(c));

	if ('A' <= c && c <= 'Z')
		printf("대문자입니다.\n");
	else if ('a' <= c && c <= 'z')
		printf("소문자입니다.\n");
	else
		printf("알파벳만 입력해주세요.\n");

	return 0;
}