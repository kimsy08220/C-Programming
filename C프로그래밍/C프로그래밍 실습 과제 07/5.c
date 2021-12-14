#include <stdio.h>

int main(void)
{
	int n1, n2, sum = 0;
	int* iptr1,* iptr2;

	printf("정수형 변수 n1, n2 입력 : ");
	scanf_s("%d%d", &n1, &n2);

	iptr1 = &n1;
	iptr2 = &n2;

	sum = *iptr1 + *iptr2;

	printf("n1 + n2 = %d\n", sum);
	return 0;
}