#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;

	while (1) {
		sum += i;
		if (sum >= 1000) {
			sum -= i;
			i--;
			printf("1���� %d������ ���� %d�Դϴ�.\n", i, sum);
			break;
		}
		i++;
	}
	
	return 0;
}