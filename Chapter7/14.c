#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	do {
		if (num < 0) {
			printf("���� �Է�");
			break;
		}
		printf("%d", num % 10);
		num = num / 10;
	} while (num != 0);
	printf("\n\n\n");
	printf("%5.2f\n", (float)20 / (float)3);
	return 0;
}