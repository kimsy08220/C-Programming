#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("정수를 3개 입력하시오 : ");
	scanf_s("%d%d%d", &x, &y, &z);

	printf("%d*%d-%d=%d\n", x, y, z, x*y-z);
	return 0;
}