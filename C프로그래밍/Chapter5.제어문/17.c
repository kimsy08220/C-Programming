#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("������ ���� ���� n�� �Է� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
		sum += i * i;

	printf("1���� %d������ ������ ���� %d�Դϴ�.\n", num, sum);
	return 0;
}