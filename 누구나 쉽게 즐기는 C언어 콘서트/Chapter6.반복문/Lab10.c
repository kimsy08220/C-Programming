#include <stdio.h>

int main(void)
{
	int num, prime = 0;

	printf("어디까지 찾을까요? : ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++) {
		prime = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}