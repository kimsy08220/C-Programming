#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer, cnt = 12;

	printf("���� ��ƽ�� ���� : %d\n", cnt);

	while (cnt >= 0) {
		
		srand(time(NULL));
		computer = rand() % 4;

		if (computer > cnt)
			computer = cnt;
		cnt -= computer;

		printf("��� ��ƽ�� �������ðڽ��ϱ�? : ");
		scanf_s("%d", &user);
		cnt -= user;
		printf("**��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", computer);
		printf("���� ��ƽ�� ���� : %d\n\n", cnt);
	}
	return 0;
}