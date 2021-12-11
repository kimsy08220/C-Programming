#include <stdio.h>

int main(void)
{
	int temperature;

	printf("온도 입력 : ");
	scanf_s("%d", &temperature);
	
	printf("오늘 온도는 ");
	if (temperature < 0)
	{
		printf("영하 ");
		temperature = -temperature;
	}

	printf("%d도입니다.\n", temperature);

	return 0;
}