#include <stdio.h>

int main(void)
{
	int cnt;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &cnt);

	for (int i = cnt; i > 0; i--)
		printf("%d ", i);

	printf("\n\a");
	return 0;
}