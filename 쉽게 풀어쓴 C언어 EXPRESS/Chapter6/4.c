#include <stdio.h>
#include <stdlib.h> // rand, srand 함수
#include <time.h> // time 함수

int main(void)
{
	int user, com ;

	printf("선택하시오(1 : 가위, 2 : 바위, 3 : 보) : ");
	scanf_s("%d", &user);

	srand((unsigned)time(NULL)); // 매번 다른 난수 생성
	com = rand() % 3 + 1;

	if (user == com)
		printf("비김\n");
	if (user == 1)
	{
		if (com == 2)
			printf("컴퓨터가 이겼음\n");
		else
			printf("사용자가 이겼음\n");
	}
	else if (user == 2)
	{
		if (com == 1)
			printf("사용자가 이겼음\n");
		else
			printf("컴퓨터가 이겼음\n");
	}
	else
	{
		if(com == 1)
			printf("컴퓨터가 이겼음\n");
		else
			printf("사용자가 이겼음\n");

	}
	return 0;
}