#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;

	while (1) {
		sum += i;
		if (sum >= 1000) {
			sum -= i;
			i--;
			printf("1부터 %d까지의 합이 %d입니다.\n", i, sum);
			break;
		}
		i++;
	}
	
	return 0;
}