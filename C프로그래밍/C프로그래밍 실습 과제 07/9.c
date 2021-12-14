#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	printf("num1 = %d, num2 = %d\n", num1, num2);
	printf("*ptr1 = %d, *ptr2 = %d\n\n", *ptr1, *ptr2);

	ptr1 = &num2;
	ptr2 = &num1;

	printf("num1 = %d, num2 = %d\n", num1, num2);
	printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

	return 0;
}