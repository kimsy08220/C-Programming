#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, cnt = 1;

	printf("출력할 3의 배수의 개수는 : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		printf("%d ", cnt * 3);
		num--;
		cnt++;
	}
	printf("\n");

	return 0;
}