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
			printf("��й�ȣ : ");
			scanf_s("%d", &n);
			check(n);
			if (check(n))
			{
				count++;
				printf("��ġ count = %d\n", count);
			}
		}
		if (!check(n))
		{
			printf("�α��� �õ�Ƚ�� �ʰ�\n");
			break;
		}
	}

	return 0;
}