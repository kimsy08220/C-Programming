#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}