#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("12달 중 30일까지 있는 달은 ");
	for (int i = 1; i <= 13; i++) {
		if (days[i] == 30) {
			printf("%d, ", i);
			cnt++;
		}
	}
	printf("\b\b 총 %d달입니다.\n", cnt);
	return 0;
}