#include <stdio.h>

int main(void)
{
	int num, n1000 = 0, n100 = 0, n10 = 0, n1 = 0;

	printf("네자리 정수를 입력하세요 : ");
	scanf_s("%d", &num);

	n1000 = num / 1000;
	n100 = num % 1000 / 100;
	n10 = num % 1000 % 100 / 10;
	n1 = num % 1000 % 100 % 10;

	printf("입력한 수는 %d천%d백%d십%d입니다.\n", n1000, n100, n10, n1);
	return 0;
}