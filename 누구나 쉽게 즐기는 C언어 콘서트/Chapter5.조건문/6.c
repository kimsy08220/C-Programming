#include <stdio.h>

int main(void)
{
	char c;

	printf("신호등의 색깔 입력(R, G, Y) : ");
	scanf_s("%c", &c, sizeof(c));

	if (c == 'r' || c == 'R')
		printf("정지!\n");
	else if (c == 'g' || c == 'G')
		printf("진행!\n");
	else if (c == 'y' || c == 'Y')
		printf("주의!\n");
	else
		printf("잘못된 입력입니다!\n");
	return 0;
}