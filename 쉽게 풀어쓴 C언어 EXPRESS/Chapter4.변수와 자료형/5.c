#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058 // const double SQMETER_PER_PYEONG = 3.3058;�̶� ������ �ڵ�


int main(void)
{
	int n;
	double meter;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	meter = n * SQMETER_PER_PYEONG;

	printf("%f�������Դϴ�.\n", meter);

	return 0;
}