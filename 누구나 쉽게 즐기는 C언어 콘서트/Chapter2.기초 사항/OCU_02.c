#include <stdio.h>		// ǥ�� ����� �Լ��� ����� ��������� ����

int main(void) {
	int gram;			// ���Ը� �Է¹��� ������ ����
	double kilogram;	// g�� kg���� ��ȯ�Ͽ� ������ �Ǽ��� ����

	printf("kg���� ������ gram �Է� : ");	// ū ����ǥ �ȿ� �ִ� ���ڿ� ���
	scanf_s("%d", &gram);	// ������ ���� gram�� �Է��� ������ �ʱ�ȭ

	kilogram = gram * 0.001;	// g�� kg���� ��ȯ�ϱ� ���� (�Է°�) * 0.001�Ͽ� kilogram�̶�� �Ǽ��� ������ ����

	printf("%dg = %.3lfkg\n", gram, kilogram);	// %d���� gram��, %.3lf���� �Ҽ��� 3�ڸ��� kilogram�� ���
	// %d : ������ ���� ���, %lf : �Ǽ��� ���� ���
	return(0);			// ��������
}




