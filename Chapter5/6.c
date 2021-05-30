#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	num = ~num + 1; // 2의 보수는 전체 비트를 반전시킨 후 1을 더한다. 반전시키는 연산자 : ~

	printf("2의 보수 : %d\n", num);
	return 0;
}