#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
			printf("%d ", j+1);
		printf("\n");
	}
	return 0;
}