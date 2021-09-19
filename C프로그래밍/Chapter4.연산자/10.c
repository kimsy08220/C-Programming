#include <stdio.h>

int main(void)
{
	int  num, second = 0, minute = 0, hour = 0;

	printf("초(sec)입력 : ");
	scanf_s("%d", &num);

	hour = num / 60 / 60;
	minute = num / 60 % 60;
	second = num % 60 % 60;

	printf(">> 입력한 %d초는 %d시간 %d분 %d초입니다.\n", num, hour, minute, second);
	return 0;
}