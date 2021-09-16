#include <stdio.h>

int main(void)
{
	char c;

	printf("문자를 입력하세요 : ");
	scanf_s("%c", &c);

	printf("%c의 ASCII 코드 값은 %d입니다.\n", c, c);
	return 0;
}