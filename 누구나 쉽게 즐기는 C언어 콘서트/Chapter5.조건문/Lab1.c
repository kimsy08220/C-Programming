#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int coin;
	
	srand(time(NULL));
	coin = rand() % 2;

	printf("���� ������ ������ �����մϴ�.\n");
	
	if (coin == 0)
		printf("�ո��Դϴ�.\n");
	else
		printf("�޸��Դϴ�.\n");
	return 0;
}