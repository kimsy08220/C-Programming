#include <stdio.h>	// ǥ�� ����� �Լ��� ����� ��������� ���Խ��� ��� (printf. scanf_s ��)
#include <math.h>	// ���� ���� �Լ����� ����� ��������� ���Խ��� ��� (abs, sqrt ��)

int main(void)
{
	int side1, side2, side3;	// �ﰢ���� �� ���� ���̸� �����ϴ� ������ ���� 
	double area = 0;			// �ﰢ���� ���̸� �����ϴ� �Ǽ��� ����

	printf("�ﰢ�� �� ���� ���̸� �Է� : ");	// ū ����ǥ �ȿ� �ִ� ���ڿ� ���
	scanf_s("%d%d%d", &side1, &side2, &side3);
	// ������ ���� side1, side2, side3�� �Է��� ������� ���� �ʱ�ȭ

	area = 1.0 / 4.0 * sqrt((side1 + side2 + side3) * (side1 + side2 - side3) * (side2 + side3 - side1) * (side3 + side1 - side2));
	// ����� ����(�� ���� ���̸� ������ ä ���̸� ���ϴ� ����)�� �����Ͽ� �Ǽ��� ���� area�� ����

	printf("�ﰢ���� ���� : %lf\n", area);	// ����� �������� ���� �ﰢ�� ���� area�� %lf�� ���� ���
	return 0;	// ��������
}






