#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n1);
	printf("�� ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n2);

	printf("���� %d�̰� �������� %d�Դϴ�.\n", n1 / n2, n1 % n2);

	return 0;
}