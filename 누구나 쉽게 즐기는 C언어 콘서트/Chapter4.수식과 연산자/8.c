#include <stdio.h>

int main(void)
{
	double n1, n2, value = 0;

	printf("2���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf%lf", &n1, &n2);

	value = n1 + n2;

	printf("���� ������ : %d\n", (int)value);
	return 0;
}