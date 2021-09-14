#include <stdio.h>

int main(void)
{
	int cnt;

	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &cnt);

	for (int i = cnt; i > 0; i--)
		printf("%d ", i);

	printf("\n\a");
	return 0;
}