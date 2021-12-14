#include <stdio.h>

int main(void)
{
	int data;
	int* p1_data, * p2_data;

	p1_data = &data;
	p2_data = &data;

	*p1_data = 10;

	printf("*p2_data(= data) = %d\n", *p2_data);

	return 0;
}