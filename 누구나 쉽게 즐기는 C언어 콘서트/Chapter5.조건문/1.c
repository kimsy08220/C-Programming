#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", num);
	else if (num % 2 != 0)
		printf("%d�� Ȧ���Դϴ�.\n", num);
	else
		printf("0�Դϴ�.\n");
	return 0;
}