#include <stdio.h>

struct game
{
	char name[50];
	int R1, R2, R3;
};

int main(void)
{
	struct game player;
	double avg;

	printf("������ �̸���? ");
	scanf_s("%s", player.name, 50);
	printf("1, 2, 3���� ������? ");
	scanf_s("%d %d %d", &player.R1, &player.R2, &player.R3);

	avg = (double)(player.R1 + player.R2 + player.R3) / 3;
	printf("%s������ ���� ���� ��� %.1lf��\n", player.name, avg);
	return 0;
}