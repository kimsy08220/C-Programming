#include <stdio.h>

int main(void)
{
	int start, end, sum = 0;

	printf("�������� : ");
	scanf_s("%d", &start);
	printf("�������� : ");
	scanf_s("%d", &end);

	for (int i = start; i <= end; i++)
		sum += i;
	printf("%d���� %d������ �� = %d\n", start, end, sum);

	return 0;
}