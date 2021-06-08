#include <stdio.h>

int check(int n)
{
	return n == 1234 ? 1 : 0;
}

int main(void)
{
	int n;
	static int count;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("비밀번호 : ");
			scanf_s("%d", &n);
			check(n);
			if (check(n))
			{
				count++;
				printf("일치 count = %d\n", count);
			}
		}
		if (!check(n))
		{
			printf("로그인 시도횟수 초과\n");
			break;
		}
	}

	return 0;
}