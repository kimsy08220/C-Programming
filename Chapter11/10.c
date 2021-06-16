#include <stdio.h>

int get_gcd(int x, int y)
{
	int a = 0;

	while (y != 0)
	{
		a = x % y;
		x = y;
		y = a;
	}
	return x;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = get_gcd(x,y);
	*p_lcm = (x * y) / *p_gcd;
}

int main(void)
{
	int n1, n2, lcm = 0, gcd = 0;

	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &n1, &n2);

	get_lcm_gcd(n1, n2, &lcm, &gcd);
	printf("최소공배수는 %d입니다.\n최대공약수는 %d입니다.\n", lcm, gcd);

	return 0;
}