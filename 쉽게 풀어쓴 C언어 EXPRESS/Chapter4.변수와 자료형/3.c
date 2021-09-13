#include <stdio.h>

int main(void)
{
	int x = 10, y = 20, tmp;

	printf("x = %d y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d y = %d\n", x, y);

	return 0;
}
