#include <stdio.h>

int main(void)
{
	double width, height, depth, volume;

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf_s("%lf %lf %lf", &width, &height, &depth);

	volume = width * height * depth;
	printf("������ ���Ǵ� %f�Դϴ�.\n", volume); // lf�� �ƴϰ� f�� ���

	return 0;
}