#include <stdio.h>

int main(void)
{
	int n10, n2[32] = {0};

	printf("10���� �Է� : ");
	scanf_s("%d", &n10);

	for (int i = 0; i < 32; i++)
	{
		n2[i] = n10 % 2;
		n10 = n10 / 2;
	}
	printf("2���� ��ȯ : ");
	for (int i = 0; i < 32; i++)
		printf("%d", n2[31-i]);
	printf("\n");
	return 0;
}