#include <stdio.h>

int main(void)
{
	int n, result = 0, a[10][3] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		a[i][0] = i + 1;
		a[i][1] = (i + 1) * (i + 1);
		a[i][2] = (i + 1) * (i + 1) * (i + 1);
	}

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < 3; i++)
	{
		if (n == a[i][2])
		{
			printf("%d의 세제곱근은 %d\n", n, a[i][0]);
			result = 1;
			break;
		}
	}
	if (result == 0)
		printf("해당 정수의 세제곱근은 배열에 없습니다.\n");
	return 0;
}