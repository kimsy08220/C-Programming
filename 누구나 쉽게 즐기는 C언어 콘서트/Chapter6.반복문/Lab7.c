#include <stdio.h>

int main(void)
{
	int num;
	double sum = 0;

	printf("���� ���� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) 
		sum += 1.0 / i;

	printf("������ �� = %lf\n", sum);

	return 0;
}