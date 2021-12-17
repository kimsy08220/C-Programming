#include <stdio.h>

int findMax(int data[], int size);

int main(void)
{
	int idata[5] = { 1, 5, 2, 8, 4 };

	int n = findMax(idata, sizeof(idata) / sizeof(int));

	printf("배열에서 두번째 최대값 : %d\n", n);
	return 0;
}

int findMax(int data[], int size)
{
	int first_max = data[0];
	int second_max = 0;

	for (int i = 1; i < 5; i++) {
		if (first_max < data[i]) {
			second_max = first_max;
			first_max = data[i];
		}
		else if (second_max <= data[i])
			second_max = data[i];
	}
	return second_max;
}