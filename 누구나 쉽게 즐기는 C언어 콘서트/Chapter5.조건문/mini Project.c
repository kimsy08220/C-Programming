#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int computer, user;

	srand(time(NULL));
	computer = rand() % 3;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�.\n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2) : ");
	scanf_s("%d", &user);

	if ((user + 1) % 3 == computer)
		printf("��ǻ�� : %d\n����� : %d\n��ǻ�� ��!\n", computer, user);
	else if (user == computer)
		printf("��ǻ�� : %d\n����� : %d\n�����ϴ�!\n", computer, user);
	else
		printf("��ǻ�� : %d\n����� : %d\n����� ��!\n", computer, user);

	return 0;
}