#include <stdio.h>

int main(void) {
	int month, total = 0;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("1������ �� �������� ������ ���ұ��? ");
	scanf_s("%d", &month);

	for (int i = 0; i <= month; i++)
		total += days[i];

	printf("1������ 9�������� �� %d���� �ֽ��ϴ�.\n", total);
	return 0;
}