#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	while (1) {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		sum += num;

		if (num == 0) {
			printf("�հ� = %d\n", sum);
			break;
		}
	}
	return 0;
}