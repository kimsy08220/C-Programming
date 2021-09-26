#include <stdio.h>

int main(void)
{
	int ang1, ang2;

	printf("삼각형의 내각 2개(빈칸으로 분리) : ");
	scanf_s("%d%d", &ang1, &ang2);

	printf("세번째 각은 %d\n", 180 - ang1 - ang2);
	return 0;
}