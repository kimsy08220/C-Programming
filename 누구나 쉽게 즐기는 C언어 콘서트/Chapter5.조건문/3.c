#include <stdio.h>

int main(void)
{
	int date;

	printf("������ 0(�Ͽ���)���� 6������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &date);

	if (0 <= date && date <= 4)
		printf("�����Դϴ�.\n");
	else if (5 <= date && date <= 6)
		printf("�ָ��Դϴ�.\n");
	else
		printf("0~6������ ������ �Է����ּ���.\n");

	return 0;
}