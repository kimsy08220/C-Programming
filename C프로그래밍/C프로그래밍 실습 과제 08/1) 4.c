#include <stdio.h>

int mul(int n1, int n2);
double div(int n1, int n2);

int main(void)
{
	int n1, n2, result = 0;

	printf("n1 입력 : ");
	scanf_s("%d", &n1);
	printf("n2 입력 : ");
	scanf_s("%d", &n2);
	
	printf("%d * %d : %d\n", n1, n2, mul(n1, n2));
	if (n2 == 0)
		printf("0으로 나눌 수 없습니다.\n");
	else
		printf("%d / %d : %lf\n", n1, n2, div(n1, n2));
	return 0;
}

int mul(int n1, int n2)
{
	return n1 * n2;
}

double div(int n1, int n2)
{
	return (double)n1 / n2;
}

