#include <stdio.h>

void convert(double* grades, double* scores, int size)
{
	for (int i = 0; i < size; i++)
	{
		scores[i] = (100 * grades[i]) / 4.3;
		printf("%3.2lf, ", scores[i]);
	}
}

int main(void)
{
	double grades[] = {1.5,2.3,2.6,3.1,3.3,3.5,3.85,4.1,4.21,4.3};
	double scores[10] = {0};

	convert(grades, scores, 10);
	printf("\n");
	return 0;
}