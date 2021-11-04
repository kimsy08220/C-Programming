#include <stdio.h>

int main(void)
{
	int a = 20, b = 10, * p1, * p2, * p3;
	p1 = &a;
	p2 = &b;
	if (*p1 > *p2) {
		p3 = p1;
		p1 = p2;
		p2 = p3;
	}
	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	return 0;
}