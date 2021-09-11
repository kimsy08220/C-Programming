#include <stdio.h>

int main(void)
{
	int n1, n2, sum = 0;
	char ch;

	printf("****************\n");
	printf("A ---- Add\n");
	printf("S ---- Subtract\n");
	printf("M ---- Multiply\n");
	printf("D ---- Divide\n");
	printf("Q ---- Quit\n");
	printf("****************\n");

	do {
		printf("연산을 선택하시오 : ");
		scanf_s(" %c", &ch, 1);

		if (ch == 'Q')
			break;

		printf("두 수를 공백으로 분리하여 입력하시오 : ");
		scanf_s("%d %d", &n1, &n2);

		switch (ch)
		{
		case 'A': printf("%d\n", n1 + n2); continue;
			break;
		case 'S': printf("%d\n", n1 - n2); continue;
			break;
		case 'M': printf("%d\n", n1 * n2); continue;
			break;
		case 'D': printf("%d\n", n1 / n2); continue;
			break;
		}

	} while (1);

	return 0;
}