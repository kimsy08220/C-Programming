#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("���� �ڸ� : %d\n���� �ڸ� : %d\n", num/10, num%10);
	return 0;
}