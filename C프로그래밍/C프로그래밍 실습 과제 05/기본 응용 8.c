#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("12�� �� 30�ϱ��� �ִ� ���� ");
	for (int i = 1; i <= 13; i++) {
		if (days[i] == 30) {
			printf("%d, ", i);
			cnt++;
		}
	}
	printf("\b\b �� %d���Դϴ�.\n", cnt);
	return 0;
}