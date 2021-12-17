#include <stdio.h>

int add(int n1, int n2);
int sub(int n1, int n2);

int main(void)
{
	int n1, n2, result = 0;

	printf("n1 입력 : ");
	scanf_s("%d", &n1);
	printf("n2 입력 : ");
	scanf_s("%d", &n2);

	result = add(n1, n2);
	printf("%d + %d : %d\n", n1, n2, result);
	result = sub(n1, n2);
	printf("%d - %d : %d\n", n1, n2, result);
	return 0;
}

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	if (n1 < n2)
		return n2 - n1;
	else
		return n1 - n2;
}

