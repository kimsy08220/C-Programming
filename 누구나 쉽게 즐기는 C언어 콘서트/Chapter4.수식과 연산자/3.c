#include <stdio.h>

int main(void)
{
	double price, disc_rate, disc_price = 0;

	printf("��ǰ ������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &price);
	printf("���η��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &disc_rate);

	disc_price = price - price * disc_rate / 100;
	printf("���ε� ������ %.2lf�Դϴ�.\n", disc_price);
	return 0;
}