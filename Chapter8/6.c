#include <stdio.h>

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return n > 0 ? n : -n;
}

int sign(int n)
{
	return n > 0 ? 1 : 0;
}

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	even(num) ? printf("even()�� ��� : ¦��\n") : printf("even()�� ��� : Ȧ��\n");
	printf("absolute()�� ��� : %d\n", absolute(num));
	sign(num) ? printf("sign()�� ��� : ���\n") : printf("sign()�� ��� : ����\n");

	return 0;
}