#include <stdio.h>

int main(void)
{
	int a, b, c, max = 0;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("���� ū ������ %d�̴�.\n", max);

	return 0;
}