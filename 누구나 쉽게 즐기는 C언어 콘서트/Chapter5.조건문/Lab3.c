#include <stdio.h>

int main(void)
{
	int a, b, c, max = 0;

	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("가장 큰 정수는 %d이다.\n", max);

	return 0;
}