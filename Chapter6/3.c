#include <stdio.h> 

int main(void)
{
	int n1, n2, n3, min = 0;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 < n2)
	{
		if (n1 > n3)
			min = n3;
		else
			min = n1;
	}
	else
	{
		if (n2 > n3)
			min = n3;
		else
			min = n2;
	}

	printf("���� ���� ������ %d �Դϴ�.\n", min);
	return 0;
}