#include <stdio.h>

int main(void)
{
	int kg, cm, avg;

	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf_s("%d %d", &kg, &cm);

	avg = (cm - 100) * 0.9;

	if (avg < kg)
		printf("��ü���Դϴ�.\n");
	else if (avg > kg)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ��ü���Դϴ�.\n");

	return 0;
}