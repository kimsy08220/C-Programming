#include <stdio.h>

double average(int data[], int size);

int main(void)
{
	int idata[5] = { 1, 5, 2, 8, 4 };

	double n = average(idata, sizeof(idata) / sizeof(int));

	printf("¹è¿­ÀÇ Æò±Õ : %lf\n", n);
	return 0;
}

double average(int data[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += data[i];
	return (double)sum / size;
}