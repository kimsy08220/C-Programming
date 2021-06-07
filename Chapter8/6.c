#include <stdio.h>

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return n > 0 ? n : -n;
}

int sign(int n)
{
	return n > 0 ? 1 : 0;
}

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	even(num) ? printf("even()의 결과 : 짝수\n") : printf("even()의 결과 : 홀수\n");
	printf("absolute()의 결과 : %d\n", absolute(num));
	sign(num) ? printf("sign()의 결과 : 양수\n") : printf("sign()의 결과 : 음수\n");

	return 0;
}