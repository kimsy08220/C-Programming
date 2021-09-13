#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("십의 자리 : %d\n일의 자리 : %d\n", num/10, num%10);
	return 0;
}