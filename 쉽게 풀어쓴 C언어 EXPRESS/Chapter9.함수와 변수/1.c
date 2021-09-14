#include <stdio.h>

int add(int x, int y)
{
	static int count;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return x + y;
}
int sub(int x, int y)
{
	static int count;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	return x - y;
}
int mul(int x, int y)
{
	static int count;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	return x * y;
}
int div(int x, int y)
{
	static int count;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	return x / y;
}


int main(void)
{
	int x, y;
	char op;
	
	for (int i = 0; i < 5; i++)
	{
		printf("연산을 입력하시오 : ");
		scanf_s("%d", &x);
		op = getchar();
		scanf_s("%d", &y);

		switch (op)
		{
		case '+': printf("연산 결과 : %d\n", add(x, y));
			break;
		case '-': printf("연산 결과 : %d\n", sub(x, y));
			break;
		case '*': printf("연산 결과 : %d\n", mul(x, y));
			break;
		case '/': printf("연산 결과 : %d\n", div(x, y));
			break;
		default: printf("지원되지 않는 연산입니다. \n");
			break;
		}
	}
	return 0;
}