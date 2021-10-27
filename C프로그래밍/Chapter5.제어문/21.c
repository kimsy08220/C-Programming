#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d%d", &n1, &n2);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", n1, n2);

	for (int i = 0; i <= 100; i++)
	{
		if (i % n1 == 0 && i % n2 != 0)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}