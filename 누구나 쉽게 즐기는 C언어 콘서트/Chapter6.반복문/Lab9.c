#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num, result = 0;

	printf("��� ������ �ڵ����� �����մϴ�.\n");

	while (1) {
		srand(time(NULL));
		int x = rand() % 100;
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf_s("%d", &num);

		result = x + y;

		if (num == result) {
			printf("�¾ҽ��ϴ�.\n");
			break;
		}
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		srand(time(NULL));
	}
	return 0;
}