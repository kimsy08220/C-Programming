#include <stdio.h>

int find_max(int data[], int size);

int main(void)
{
	int idata[5] = {1, 5, 2, 8, 4};

	int n = find_max(idata, sizeof(idata) / sizeof(int));

	printf("�迭���� �ִ밪 : %d\n", n);
	return 0;
}

int find_max(int data[], int size)
{
	int max = data[0];
	for (int i = 1; i < size; i++)
		if (max < data[i])
			max = data[i];
	return max;
}