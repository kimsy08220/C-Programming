#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &n1);
	printf("두 번째 정수를 입력하시오 : ");
	scanf_s("%d", &n2);

	printf("몫은 %d이고 나머지는 %d입니다.\n", n1 / n2, n1 % n2);

	return 0;
}