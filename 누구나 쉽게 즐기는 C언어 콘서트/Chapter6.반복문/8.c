#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 128; i++) {
		printf("%d : \t%c\n", i, i);
	}
	return 0;
}