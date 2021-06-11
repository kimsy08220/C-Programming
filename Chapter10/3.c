#include <stdio.h>

int array_equal(int a[], int b[])
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == b[i])
			return 1;
		else
			return 0;
	}
}

int main(void)
{
	int a[10] = {1,2,3,0}, b[10] = {0};

	for(int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", b[i]);

	array_equal(a,b);

	if(array_equal(a, b))
		printf("\n2개의 배열을 같음\n");
	else
		printf("\n2개의 배열을 다름\n");
	return 0;
}