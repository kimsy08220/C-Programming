#include <stdio.h>

int add(int x, int y)
{
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x + y;
}
int sub(int x, int y)
{
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x - y;
}
int mul(int x, int y)
{
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x * y;
}
int div(int x, int y)
{
	static int count;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	return x / y;
}


int main(void)
{
	int x, y;
	char op;
	
	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &x);
		op = getchar();
		scanf_s("%d", &y);

		switch (op)
		{
		case '+': printf("���� ��� : %d\n", add(x, y));
			break;
		case '-': printf("���� ��� : %d\n", sub(x, y));
			break;
		case '*': printf("���� ��� : %d\n", mul(x, y));
			break;
		case '/': printf("���� ��� : %d\n", div(x, y));
			break;
		default: printf("�������� �ʴ� �����Դϴ�. \n");
			break;
		}
	}
	return 0;
}