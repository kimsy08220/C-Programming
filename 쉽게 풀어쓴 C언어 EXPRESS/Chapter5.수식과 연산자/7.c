#include <stdio.h>

int main(void)
{
	int num, cnt, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf_s("%d", &cnt);

	result = num << cnt;
	printf("%d<<%d�� �� : %d\n", num, cnt, result);

	return 0;
}