#include <stdio.h>

int main(void) {
	int month, total = 0;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("1월부터 몇 월까지의 총일을 구할까요? ");
	scanf_s("%d", &month);

	for (int i = 0; i <= month; i++)
		total += days[i];

	printf("1월부터 9월까지는 총 %d일이 있습니다.\n", total);
	return 0;
}