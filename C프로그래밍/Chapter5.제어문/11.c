#include <stdio.h>

int main(void)
{
	int num, i;

	printf("���� ���� n : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (num == i)
		printf(">> %d��(��) �Ҽ��Դϴ�.\n", num);
	else
		printf(">> %d��(��) �Ҽ��� �ƴմϴ�.\n", num);

	return 0;
}