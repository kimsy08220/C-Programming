#include <stdio.h>

int main(void)
{
	int n, f0 = 0, f1 = 1, f2 = 2;

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("%d ", f0);
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
	}
	printf("\n");
	return 0;
}