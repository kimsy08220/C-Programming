#include <stdio.h>

int main(void)
{
	long num;
	int cnt = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%ld", &num);

	do {
		num /= 10;
		cnt++;
	} while (num != 0);

	printf("�� �ڸ��� : %d\n", cnt);

	return 0;
}