#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num3);

	printf("����� %lf�Դϴ�.\n", (num1 + num2 + num3) / 3.0);
	return 0;
}