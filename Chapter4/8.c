#include <stdio.h>

int main(void)
{
	int num;

	printf("아스키 코드값을 입력하시오 : ");
	scanf_s("%d", &num);

	printf("문자 : %c입니다.\n", num);
	return 0;
}