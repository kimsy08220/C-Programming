#include <stdio.h>

int main(void)
{
	double width, height, depth, volume;

	printf("상자의 가로 세로 높이를 한번에 입력 : ");
	scanf_s("%lf %lf %lf", &width, &height, &depth);

	volume = width * height * depth;
	printf("상자의 부피는 %f입니다.\n", volume); // lf가 아니고 f로 출력

	return 0;
}