#include <stdio.h>

int check_prime(int);

int main(void) {
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	if (check_prime(num) == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");
	return 0;
}

int check_prime(int num) {
	int prime = 1;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}
	return prime;
}