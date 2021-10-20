#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	while (1) {
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &num);
		sum += num;

		if (num == 0) {
			printf("합계 = %d\n", sum);
			break;
		}
	}
	return 0;
}