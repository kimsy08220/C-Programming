#include <stdio.h>

int main(void)
{
	char c;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c, sizeof(c));

	if ('A' <= c && c <= 'z')
		printf("알파벳입니다.\n");
	else if ('0' <= c && c <= '9')
		printf("숫자입니다.\n");
	else
		printf("특수문자입니다.\n");

	return 0;
}