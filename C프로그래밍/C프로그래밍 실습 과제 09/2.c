#include <stdio.h>

struct rectangle
{
	int width, height, area;
};

int main(void)
{
	struct rectangle r1 = { 3, 7 }, r2 = { 2, 5 };
	struct rectangle larger;
	r1.area = r1.width * r1.height;
	r2.area = r2.width * r2.height;

	if (r1.area > r2.area)
		larger = r1;
	else
		larger = r2;
	printf("�� ū �簢���� ������ %d�Դϴ�.\n", larger.area);
}