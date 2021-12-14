#include <stdio.h>

int main(void)
{
	char ch;
	char* cptr;

	printf("문자 변수 char 입력 : ");
	ch = getchar();

	cptr = &ch;
	printf("char의 값 : %c\n", ch);

	for (char c = ch; c <= 'z'; c++) {
		cptr = &c;
		printf("%c", c);
	}
	printf("\n");

	return 0;
}