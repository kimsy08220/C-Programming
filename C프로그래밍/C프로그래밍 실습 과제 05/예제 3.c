#include <stdio.h>
#define SIZE 5

int main(void)
{
	int quiz[SIZE];
	int cnt = 0, sum = 0;
	double avg;

	// �迭�� �Է� 
	printf("%d���� ������ ������� �Է��ϼ���.\n\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d���� ���� ������? ", i + 1);
		scanf_s("%d", &quiz[i]);
	}

	// �迭 ��� ���ϱ�
	for (int i = 0; i < SIZE; i++)
		sum += quiz[i];

	avg = (double) sum / SIZE;

	// ��� �̸��� �� ���ϱ�
	for (int i = 0; i < SIZE; i++)
		if (quiz[i] < avg)
			cnt++;

	// ��� ���
	printf("===============================\n");
	printf(" ��ȣ	����	��հ��� ����\n");
	printf("===============================\n");
	for (int i = 0; i < SIZE; i++)
		printf("  %2d	 %2d	   %5.1lf\n", i + 1, quiz[i], quiz[i] - avg);
	printf("===============================\n");
	printf("��� %.1lf��\n", avg);
	printf("===============================\n");
	printf("��� �̸� : %d��\n", cnt);
	return 0;
}