#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}

int main(void)
{
	int x, y, p_sum = 0, p_diff = 0;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	get_sum_diff(x, y, &p_sum, &p_diff);

	printf("���ҵ��� �� = %d\n", p_sum);
	printf("���ҵ��� �� = %d\n", p_diff);
	return 0;
}