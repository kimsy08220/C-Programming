#include <stdio.h>

int main(void)
{
	char c;

	printf("문자 입력 : ");
	//c = getchar();
	scanf_s("%c", &c, sizeof(c));

	if (c >= 'A' && c <= 'Z')
		printf("알파벳 대문자입니다.\n");
	else if (c >= 'a' && c <= 'z')
		printf("알파벳 소문자입니다.\n");
	else if (c >= '0' && c <= '9')
		printf("숫자입니다.\n");

	return 0;
}