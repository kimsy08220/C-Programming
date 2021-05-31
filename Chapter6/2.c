#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n1);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n2);

	if (n1 % n2 == 0) // 약수 판별
		printf("약수입니다.\n");
	else
		printf("약수가 아닙니다.\n");
	return 0;
}