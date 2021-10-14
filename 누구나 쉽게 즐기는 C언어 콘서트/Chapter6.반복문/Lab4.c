#include <stdio.h>

int main(void)
{
	long num;
	int cnt = 0;

	printf("정수를 입력하시오 : ");
	scanf_s("%ld", &num);

	do {
		num /= 10;
		cnt++;
	} while (num != 0);

	printf("총 자리수 : %d\n", cnt);

	return 0;
}