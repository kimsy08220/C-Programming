#include <stdio.h>

int findMin(int data[], int size);

int main(void)
{
	int idata[5] = { 1, 5, 2, 8, 4 };

	int n = findMin(idata, sizeof(idata) / sizeof(int));

	printf("배열에서 최소값 : %d\n", n);
	return 0;
}

int findMin(int data[], int size)
{
	int min = data[0];
	for (int i = 1; i < size; i++)
		if (min > data[i])
			min = data[i];
	return min;
}