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

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &n1, &n2);

	get_lcm_gcd(n1, n2, &lcm, &gcd);
	printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.\n", lcm, gcd);

	return 0;
}