#include <stdio.h>

int main(void)
{
	int num;
	int *iptr;

	printf("정수형 변수 num 입력 : ");
	scanf_s("%d", &num);

	iptr = &num;
	*iptr = *iptr + 1;

	printf("num의 값 : %d\n", num);

	return 0;
}