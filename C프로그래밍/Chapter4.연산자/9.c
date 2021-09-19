#include <stdio.h>

int main(void)
{
	int GB, MB = 0, KB = 0;

	printf("ют╥б(Gigabyte) : ");
	scanf_s("%d", &GB);

	MB = GB * 1024;
	KB = MB * 1024;

	printf(">> %dGigabyte = %dMegabyte = %dKillobyte\n", GB, MB, KB);
	return 0;
}