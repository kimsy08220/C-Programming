#include <stdio.h>

int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	printf("빛의 속도는 %lfk/m\n", light_speed);
	printf("태양과 지구와의 거리 %lfkm\n", distance);

	time = distance / light_speed / 60;
	printf("도달 시간은 %lf분\n", time);

	return 0;
}