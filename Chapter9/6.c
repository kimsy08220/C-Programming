#include <stdio.h>

int power(int base, int power_raised)
{
	if (power_raised == 0)
		return 1;
	else
		return base * power(base, power_raised - 1);
}

int main(void)
{
	int base, power_raised;

	printf("�ؼ� : ");
	scanf_s("%d", &base);
	printf("���� : ");
	scanf_s("%d", &power_raised);

	printf("%d^%d = %d\n", base, power_raised, power(base, power_raised));
	return 0;
}