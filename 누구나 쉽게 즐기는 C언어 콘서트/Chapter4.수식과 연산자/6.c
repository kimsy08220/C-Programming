#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("���� �ڸ��� : %d\n", num / 100);
	printf("���� �ڸ��� : %d\n", num % 100 / 10);
	printf("���� �ڸ��� : %d\n", num % 100 % 10);
	return 0;
}