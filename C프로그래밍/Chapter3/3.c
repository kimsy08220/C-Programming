#include <stdio.h>

int main(void)
{
	int kor, music;

	printf("���� ���� ������?");
	scanf_s("%d%d", &kor, &music);

	double ave;
	ave = (kor + music) / 2.0;

	printf("====================\n");
	printf("����	����	���\n");
	printf("--------------------\n");
	printf("%3d     %3d	%.1lf\n", kor, music, ave);
	printf("====================\n");

	return 0;
}