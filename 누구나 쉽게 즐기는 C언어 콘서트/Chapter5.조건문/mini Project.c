#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int computer, user;

	srand(time(NULL));
	computer = rand() % 3;

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2) : ");
	scanf_s("%d", &user);

	if ((user + 1) % 3 == computer)
		printf("컴퓨터 : %d\n사용자 : %d\n컴퓨터 승!\n", computer, user);
	else if (user == computer)
		printf("컴퓨터 : %d\n사용자 : %d\n비겼습니다!\n", computer, user);
	else
		printf("컴퓨터 : %d\n사용자 : %d\n사용자 승!\n", computer, user);

	return 0;
}