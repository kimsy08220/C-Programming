#include <stdio.h>

int main(void)
{
	int num;

	printf("�� ���̳� �ݺ��ұ��? : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
		printf("�ȳ��ϼ���?\n");

	return 0;
}