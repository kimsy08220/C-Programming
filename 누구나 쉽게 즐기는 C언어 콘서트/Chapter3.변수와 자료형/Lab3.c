#include <stdio.h>

int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	printf("���� �ӵ��� %lfk/m\n", light_speed);
	printf("�¾�� �������� �Ÿ� %lfkm\n", distance);

	time = distance / light_speed / 60;
	printf("���� �ð��� %lf��\n", time);

	return 0;
}