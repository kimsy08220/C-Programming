#include <stdio.h> // 보완해야함

int get_tax(int income)
{
	if (income <= 1000)
		return income * 0.08;
	else
		return income * 0.1;
}

int main(void)
{
	int income;

	printf("소득을 입력하시오(만원) : ");
	scanf_s("%d", &income);

	printf("소득세는 %d입니다.\n", get_tax(income));
	return 0;
}