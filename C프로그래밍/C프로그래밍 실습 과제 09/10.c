#include <stdio.h>
#include <stdlib.h>

void input_output(int *score, int size);

int main(void)
{
	int size, sum;
	int* score;

	printf("�л�����? ");
	scanf_s("%d", &size);

	score = (int*)malloc(sizeof(int) * size);

	if (score == NULL) {
		printf("���� ������ �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(1);
	}

	input_output(score, size);
	free(score);
	return 0;
}

void input_output(int* score, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		printf("%d��° �л��� ������? ", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	printf("\n%d���� ��� : %.1lf\n", size, (double)sum / size);
}