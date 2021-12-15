#include <stdio.h>

int main(void)
{
	char* first = "GilDong";
	char* second = "Hong";
	char* tmp;

	printf("Name : %s %s\n", first, second);

	tmp = first;
	first = second;
	second = tmp;

	printf("Name : %s %s\n", first, second);
	return 0;
}