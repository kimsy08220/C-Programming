#include <stdio.h>

int main(void)
{
	int F, C;

	printf("=====================\n");
	printf("ȭ���µ�    �����µ�\n");
	printf("=====================\n");

	for (int F = 0; F <= 100; F+=10) {
		C = (F - 32.0) * 5.0 / 9.0;
		printf("   %d	      %d\n", F, C);
	}
	return 0;
}