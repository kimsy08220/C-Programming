#include <stdio.h>

int main(void)
{
	int num;
	int* iptr;

	printf("������ ���� num�� �� �Է� : ");
	scanf_s("%d", &num);

	iptr = &num;
	printf("num�� �� : %d\n", num);

	return 0;
}