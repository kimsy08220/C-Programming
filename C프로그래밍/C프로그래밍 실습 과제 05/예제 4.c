#include <stdio.h>
#define N 5

int main(void)
{
	int f[N] = {3, 0, -30, -20, -1};
	int min = f[0];

	// �ּҰ� ���ϱ�
	for (int i = 1; i < N; i++)
		if (f[i] < min)
			min = f[i];

	// �迭 ���� ���
	printf("��� �� ��� : ");
	for (int i = 0; i < N; i++)
		printf("%4d", f[i]);

	// �ּڰ� ���
	printf("\n���� ���� ��� �� : %d\n", min);
	return 0;
}