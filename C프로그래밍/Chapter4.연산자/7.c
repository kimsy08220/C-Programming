#include <stdio.h>

int main(void)
{
	int radius, height;
	double area = 0, pi = 3.141592;

	printf("원기동의 밑면의 반지름, 높이를 입력하세요(cm단위) : ");
	scanf_s("%d%d", &radius, &height);

	area = pi * radius * radius * height; 

	printf(">> 계산한 원기둥의 부피는 %.1lfcm³입니다.\n", area);
	return 0;
}