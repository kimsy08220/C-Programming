#include <stdio.h>

int main(void)
{
	int ang1, ang2;

	printf("�ﰢ���� ���� 2��(��ĭ���� �и�) : ");
	scanf_s("%d%d", &ang1, &ang2);

	printf("����° ���� %d\n", 180 - ang1 - ang2);
	return 0;
}