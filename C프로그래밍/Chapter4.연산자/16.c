#include <stdio.h>

int main(void)
{
	int year;

	printf("년도를 입력하세요 : ");
	scanf_s("%d", &year);

	year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? printf("윤년\n") : printf("평년\n");
	return 0;
}