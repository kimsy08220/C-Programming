#include <stdio.h>

int main(void)
{
	int num, j, n = 2;

	printf("최대 몇까지의 소수를 출력? ");
	scanf_s("%d", &num);

	while (n < num) {
		for (j = 2; j < n; j++)
			if (n % j == 0)
				break;
		if (n == j)
			printf("%d ", n);
		n++;
	}
	printf("\n");

	return 0;
}