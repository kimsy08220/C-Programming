#include <stdio.h>

int main(void)
{
	int cnt = 0;
	double pheight = 0.001, everest = 8800.0;

	while (pheight < everest) {
		pheight *= 2;
		cnt++;
	}

	printf("���� ���� Ƚ�� = %d\n", cnt);

	return 0;
}