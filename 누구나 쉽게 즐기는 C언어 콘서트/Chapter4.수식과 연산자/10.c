#include <stdio.h>

int main(void)
{
	int num, n, value = 0;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	value = (1 << n) | num;

	printf("���ο� �� = %d\n", value);

	return 0;
}