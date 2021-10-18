#include <stdio.h>

int main(void)
{
	for (int i = 60; i >= 0; i--) {
		printf("%d ", i);

		if (i == 0)
			printf("น฿ป็\n");
	}

	return 0;
}