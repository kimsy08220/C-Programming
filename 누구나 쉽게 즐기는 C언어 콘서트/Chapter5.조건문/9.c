#include <stdio.h>

int main(void)
{
	int n1, n2, result = 0;
	char op;

	printf("수식을 입력하시오 : ");
	scanf_s("%d %c %d", &n1, &op, sizeof(op), &n2);

	switch (op)
	{
	case '+': result = n1 + n2; 
		break;
	case '-': result = n1 - n2;
		break;
	case '*': result = n1 * n2;
		break;
	case '/': result = n1 / n2;
		break;
	default: printf("잘못된 값입니다.\n");
		break;
	}

	printf("%d\n", result);

	return 0;
}