#include <stdio.h>

int main(void) {
	int n1, n2;

	printf("2개의 숫자 : ");
	scanf_s("%d%d", &n1, &n2);

	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
}