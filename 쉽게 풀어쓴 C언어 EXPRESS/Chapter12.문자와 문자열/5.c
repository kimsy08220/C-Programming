#include <stdio.h> // 수정 요청
#include <string.h>
#include <ctype.h>

int main(void)
{
	char c;

	do {
		printf("문자를 입력하시오 : ");
		c = getchar();

		if (islower(c))
			putchar(toupper(c));
		else if (isupper(c))
			putchar(tolower(c));
		printf("\n");
		fflush(stdin);
	} while (c != '.');
	return 0;
}