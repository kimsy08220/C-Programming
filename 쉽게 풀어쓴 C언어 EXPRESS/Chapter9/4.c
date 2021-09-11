#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_random()
{
	static int inited = 0;

	if (inited == 0)
	{
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
		inited = 1;
	}
	return rand();
}

int main(void)
{
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	return 0;
}