#include <stdio.h>

int main(void)
{
	int n1, n2, sum = 0;
	int* iptr1,* iptr2;

	printf("������ ���� n1, n2 �Է� : ");
	scanf_s("%d%d", &n1, &n2);

	iptr1 = &n1;
	iptr2 = &n2;

	sum = *iptr1 + *iptr2;

	printf("n1 + n2 = %d\n", sum);
	return 0;
}