#include <stdio.h>

int main(void)
{
	int* ptr, a[5] = {10, 20, 30, 40, 50};
	ptr = a;
	printf("간접 참조 : %d, 직접 참조 : %d\n", *(ptr + 3), a[3]);
	return 0;
}