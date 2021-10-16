#include <stdio.h>

int main(void)
{
	int num;
	double sum = 0;

	printf("항의 개수 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) 
		sum += 1.0 / i;

	printf("수열의 합 = %lf\n", sum);

	return 0;
}