#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("삼각형의 세변 입력 : ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
		printf("유효한 삼각형\n");
	else
		printf("유효하지 않은 삼각형\n");

	return 0;
}