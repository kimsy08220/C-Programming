#include <stdio.h>

int sumOfRange(int n1, int n2);

int main(void)
{
	int n1, n2, result = 0;

	printf("n1 �Է� : ");
	scanf_s("%d", &n1);
	printf("n2 �Է� : ");
	scanf_s("%d", &n2);

	result = sumOfRange(n1, n2);
	printf("%d���� %d������ �� : %d\n", n1, n2, result);
	return 0;
}

int sumOfRange(int n1, int n2)
{
	int sum = 0;
	for (int i = n1; i <= n2; i++)
		sum += i;
	return sum;
}