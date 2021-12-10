#include <stdio.h>

int main(void) {
	int n, sum = 0;

	scanf_s("%d", &n);
	sum += n;
	scanf_s("%d", &n);
	sum += n;
	scanf_s("%d", &n);
	sum += n;
	scanf_s("%d", &n);
	sum += n;
	scanf_s("%d", &n);
	sum += n;

	printf("5개 숫자의 합 : %d\n", sum);
}