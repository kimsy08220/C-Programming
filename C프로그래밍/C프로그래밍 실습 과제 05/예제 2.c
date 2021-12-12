#include <stdio.h>

int main(void)
{
	int num[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
			do {
				printf("0보다 큰 정수만 입력하세요\n");
				scanf_s("%d", &num[i]);
			} while (num[i] < 0);
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
	printf("\n");

	// 1)
	int cnt = 0, sum = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 1)
			cnt++;
	}
	printf("홀수의 개수 : %d\n", cnt);

	// 2)
	for (int i = 0; i < 10; i++) 
		sum += num[i];
	printf("입력된 원소의 합 : %d\n", sum);

	// 3)
	cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] > 10)
			cnt++;
	}
	printf("10보다 큰 수의 개수 : %d\n", cnt);


	return 0;
}