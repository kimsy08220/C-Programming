#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int coin;
	
	srand(time(NULL));
	coin = rand() % 2;

	printf("동전 던지기 게임을 시작합니다.\n");
	
	if (coin == 0)
		printf("앞면입니다.\n");
	else
		printf("뒷면입니다.\n");
	return 0;
}