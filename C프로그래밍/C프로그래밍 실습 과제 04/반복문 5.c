#include <stdio.h>

int main(void)
{
	int n;

	while (1)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &n);

		if (n % 2 == 0)
		{
			printf("홀수를 입력하세요.\n");
			break;
		}

		// (1)
		/*for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		}*/
		for (int i = 0; i <= n - 1; i++)
		{
			for (int j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
		printf("\n");

		// (2)
		/*for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n + 1 - i; j++)
				printf("*");
			printf("\n");
		}*/
		/*for (int i = 0; i < n; i++)
		{
			for (int j = 1; j <= n + 1 - i; j++)
				printf("*");
			printf("\n");
		}
		*/
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j >= i; j--)
				printf("*");
			printf("\n");
		}
		
		/*for (int i = 0; i <= n - 1; i++)
		{
			for (int j = 0; j <= n - 1 - i; j++)
				printf("*");
			printf("\n");
		}*/
		printf("\n");

		// (3)
		for (int i = 1; i <= (n + 1) / 2; i++)	// 줄 
		{
			for (int j = 1; j <= (n + 1) / 2 - i; j++)	// 빈칸 출력
				printf(" ");
			for (int k = 1; k <= 2 * i - 1; k++)	// 별 출력
				printf("*");
			printf("\n");
		}
		/*for (int i = 0; i <= n - 3; i++)
		{
			for (int j = 0; j < n - 3 - i; j++)
				printf(" ");
			for (int k = 0; k < 2 * i + 1; k++)
				printf("*");
			printf("\n");
		}*/
		printf("\n");
	}
	return 0;
}