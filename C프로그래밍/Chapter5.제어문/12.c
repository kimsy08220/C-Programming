#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, cnt = 1;

	printf("����� 3�� ����� ������ : ");
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