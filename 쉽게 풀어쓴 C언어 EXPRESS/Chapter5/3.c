#include <stdio.h> 

int main(void)
{
	int n1, n2, n3, result;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	result = n1 < n2 ? n2 : n1;
	result = n3 < result ? result : n3;

	printf("�ִ� : %d\n", result);
	return 0;
}