#include <stdio.h>

int main(void)
{
	int kor, eng, math, attend;
	double avg = 0;
	char name[10];

	printf("�л��� �̸� : ");
	gets_s(name, 10);

	printf("���� : ");
	scanf_s("%d", &kor);
	printf("���� : ");
	scanf_s("%d", &eng);
	printf("���� : ");
	scanf_s("%d", &math);
	printf("��� : ");
	scanf_s("%d", &attend);

	avg = (kor + eng + math + attend) / 4.0 ;

	printf("\n----------------------------------------\n");
	avg >= 70 && avg <= 80 ? printf("	[%s]�л� >> �հ�!", name) : printf("	[%s]�л� >> ���հ�!", name);
	printf("\n----------------------------------------\n");
	printf("	�� ������ ��� : %.1lf\n", avg);
	printf("	��� ���� : %d\n", attend);
	printf("----------------------------------------\n");
	
	return 0;
}