#include <stdio.h>

int main(void)
{
	int price, num;

	printf("��ǰ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &price);
	printf("��ǰ�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("�� ������ %d�Դϴ�.\n", price * num);

	return 0;
}