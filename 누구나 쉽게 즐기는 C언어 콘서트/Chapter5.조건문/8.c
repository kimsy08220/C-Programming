#include <stdio.h>
// ����

int main(void)
{
	int avg_money;
	double money = 0;

	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf_s("%d", &avg_money);

	if (avg_money <= 1000)
		money += money * 0.08;
	if (avg_money <= 4000)
		money += money * 0.17;
	if (avg_money <= 8000)
		money += money * 0.26;
	if (8001 <= avg_money)
		money += money * 0.35;

	printf("�ҵ漼�� %lf�����Դϴ�.\n", money);

	return 0;
}