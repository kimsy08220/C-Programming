#include <stdio.h>
#define RATE 1120

int main(void)
{
	int usd, krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &usd);

	krw = usd * RATE;

	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);

	return 0;
}