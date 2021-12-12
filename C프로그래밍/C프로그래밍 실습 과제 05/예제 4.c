#include <stdio.h>
#define N 5

int main(void)
{
	int f[N] = {3, 0, -30, -20, -1};
	int min = f[0];

	// 최소값 구하기
	for (int i = 1; i < N; i++)
		if (f[i] < min)
			min = f[i];

	// 배열 내용 출력
	printf("어는 점 목록 : ");
	for (int i = 0; i < N; i++)
		printf("%4d", f[i]);

	// 최솟값 출력
	printf("\n가장 낮은 어는 점 : %d\n", min);
	return 0;
}