#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number, cnt = 0, result = 0;

	srand(time(NULL));
	result = rand() % 100 + 1;

	do {

		printf("������ �����Ͽ� ���ÿ� : ");
		scanf_s("%d", &number);
		cnt++;

		if (number < result)
			printf("������ ������ �����ϴ�.\n");
		else if (number > result)
			printf("������ ������ �����ϴ�.\n");
		else {
			printf("�����մϴ�.�õ�Ƚ�� = %d\n", cnt);
		}
	} while (number != result);

	return 0;
}