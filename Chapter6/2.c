#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n1);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n2);

	if (n1 % n2 == 0) // ��� �Ǻ�
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");
	return 0;
}