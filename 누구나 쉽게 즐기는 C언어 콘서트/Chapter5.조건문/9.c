#include <stdio.h>

int main(void)
{
	int n1, n2, result = 0;
	char op;

	printf("������ �Է��Ͻÿ� : ");
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
	default: printf("�߸��� ���Դϴ�.\n");
		break;
	}

	printf("%d\n", result);

	return 0;
}