#include <stdio.h>

int check_prime(int);

int main(void) {
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (check_prime(num) == 1)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");
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