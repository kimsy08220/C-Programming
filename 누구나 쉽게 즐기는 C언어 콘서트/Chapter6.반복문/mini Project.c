#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer, cnt = 12;

	printf("현재 스틱의 개수 : %d\n", cnt);

	while (cnt >= 0) {
		
		srand(time(NULL));
		computer = rand() % 4;

		if (computer > cnt)
			computer = cnt;
		cnt -= computer;

		printf("몇개의 스틱을 가져가시겠습니까? : ");
		scanf_s("%d", &user);
		cnt -= user;
		printf("**컴퓨터는 %d개의 스틱을 가져갔습니다.\n", computer);
		printf("현재 스틱의 개수 : %d\n\n", cnt);
	}
	return 0;
}