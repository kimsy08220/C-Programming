#include <stdio.h>

int find_larger(int first, int second);

int main(void)
{
	int n1, n2, max;

	printf("ù° ����? ");
	scanf_s("%d", &n1);
	printf("��° ����? ");
	scanf_s("%d", &n2);

	max = find_larger(n1, n2);
	printf("%d, %d �� ū ���� %d \n", n1, n2, max);

	return 0;
}

int find_larger(int first, int second)
{
	if (first > second)
		return first;
	else
		return second;
}