#include <stdio.h>
#define RATE 1120

int main(void)
{
	int usd, krw;

	printf("달러화 금액을 입력하시오 : ");
	scanf_s("%d", &usd);

	krw = usd * RATE;

	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	return 0;
}