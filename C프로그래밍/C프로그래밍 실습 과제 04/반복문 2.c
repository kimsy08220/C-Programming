#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
		sum += i;

	printf("%d������ �� : %d\n", num, sum);

	return 0;
}