#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	do {
		if (num < 0) {
			printf("음수 입력");
			break;
		}
		printf("%d", num % 10);
		num = num / 10;
	} while (num != 0);
	printf("\n\n\n");
	printf("%5.2f\n", (float)20 / (float)3);
	return 0;
}