#include <stdio.h>

int main(void)
{
	int num;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("LSB�� %d\n", num & 1);
	return 0;
}