#include <stdio.h>

int main(void)
{
	int kg, cm, avg;

	printf("체중과 키를 입력하세요 : ");
	scanf_s("%d %d", &kg, &cm);

	avg = (cm - 100) * 0.9;

	if (avg < kg)
		printf("과체중입니다.\n");
	else if (avg > kg)
		printf("저체중입니다.\n");
	else
		printf("표준체중입니다.\n");

	return 0;
}