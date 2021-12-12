#include <stdio.h>

int main(void)
{
	int freeze[10] = {15, 0, -20, -30, 50, -5, -120, -5, 10, -12};
	int max = freeze[0];
	int index = 0;

	printf("어는 점 목록 : ");
	for (int i = 0; i < 10; i++)
		printf("%d ", freeze[i]);
	printf("\n");

	for (int i = 1; i < 10; i++) {
		if (max < freeze[i]) {
			max = freeze[i];
			index = i;
		}
	}
	printf("가장 높은 어는 점 : freeze[%d] = %d\n", index, max);
	return 0;
}