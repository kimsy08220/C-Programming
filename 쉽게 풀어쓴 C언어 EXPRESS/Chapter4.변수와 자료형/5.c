#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058 // const double SQMETER_PER_PYEONG = 3.3058;이랑 동일한 코드


int main(void)
{
	int n;
	double meter;

	printf("평을 입력하세요 : ");
	scanf_s("%d", &n);

	meter = n * SQMETER_PER_PYEONG;

	printf("%f평방미터입니다.\n", meter);

	return 0;
}