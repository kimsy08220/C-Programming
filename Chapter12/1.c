#include <stdio.h>

int main(void)
{
	char c;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c, 1);

	printf("아스키 코드 값 = %d\n", c);
	return 0;
}