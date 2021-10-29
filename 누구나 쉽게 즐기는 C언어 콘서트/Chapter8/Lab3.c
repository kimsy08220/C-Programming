#include <stdio.h>
#include <stdlib.h>

double power(int x, int y) {
	double result = 1;
	for (int i = 0; i < y; i++)
		result *= x;
	return result;
}
double factorial(int n) {
	double result = 1; 
	if (n <= 1)
		return 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main(void) {
	double sum = 0;
	int x, n;
	printf("x�� n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &n);
	for (int i = 0; i <= n; i++)
		sum += power(x, i) / factorial(i);
	printf("e^%d = %.3lf\n", x, sum);
	return 0;
}