#include <stdio.h>

int main(void)
{
	int date;

	printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오 : ");
	scanf_s("%d", &date);

	if (0 <= date && date <= 4)
		printf("주중입니다.\n");
	else if (5 <= date && date <= 6)
		printf("주말입니다.\n");
	else
		printf("0~6까지의 정수를 입력해주세요.\n");

	return 0;
}