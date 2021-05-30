#include <stdio.h>

int main(void)
{
	int n1, n2;
	printf("2개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("몫 : %d 나머지 : %d\n", n1/n2, n1%n2);
	return 0;
}