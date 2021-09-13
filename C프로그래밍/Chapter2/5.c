#include <stdio.h>

int main(void)
{
	int inch = 25;
	double cm;
	cm = inch * 2.54;
	printf("%dinch는 %lfcm입니다.\n", inch, cm);
	return 0;
}