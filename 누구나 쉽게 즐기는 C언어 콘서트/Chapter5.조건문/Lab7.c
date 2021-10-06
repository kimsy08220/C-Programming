#include <stdio.h>

int main(void)
{
	int tmp;

	printf("오늘의 기온을 입력하시오 : ");
	scanf_s("%d", &tmp);

	if (tmp < -10)
		printf("매우 추운 날씨입니다.\n");
	else if (-10 <= tmp && tmp < 0)
		printf("추운 날씨입니다.\n");
	else if (0 <= tmp && tmp < 10)
		printf("쌀쌀한 날씨입니다.\n");
	else if (10 <= tmp && tmp < 20)
		printf("쾌적한 날씨입니다.\n");
	else if (20 <= tmp && tmp < 30)
		printf("더운 날씨입니다.\n");
	else if (30 <= tmp)
		printf("매우 더운 날씨입니다.\n");

	return 0;
}