#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	num = ~num + 1; // 2�� ������ ��ü ��Ʈ�� ������Ų �� 1�� ���Ѵ�. ������Ű�� ������ : ~

	printf("2�� ���� : %d\n", num);
	return 0;
}