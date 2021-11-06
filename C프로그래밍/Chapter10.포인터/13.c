#include <stdio.h>

int main(void)
{
	double ary[] = {170.5, 165.3, 157.2, 160.0, 165.7};
	double* ptr = ary;

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		printf("%.1lf ", *(ptr + i));
	}
	printf("\n");
	return 0;
}