#include <stdio.h>	// ǥ�� ����� �Լ��� ����� ��������� ���Խ��� ��� (printf, scanf_s ��)
#include <stdlib.h>	// ���ڿ� ��ȯ, ���� ���� ���� �Լ��� ����� ��������� ���Խ��� ���(srand, rand ��)
#include <math.h>	// ���� ���� �Լ����� ����� ��������� ���Խ��� ��� (abs, sqrt ��)
#include <time.h>	// ��¥�� �ð� ���� �Լ��� ����� ��������� ���Խ��� ��� (time ��)

struct point {
	int x, y; 	// 2�������� �� ��(point)
};

struct triangle {
	struct point point1;	// ������ 1
	struct point point2;	// ������ 2
	struct point point3;	// ������ 3
};

// �ﰢ���� �����Ǵ� ���θ� Ȯ���Ͽ� ������ ��ȯ�ϴ� �Լ�
int condition(struct triangle *t1)
{
	// �ﰢ���� ���� X : x �Ǵ� y ��ǥ�� ��� ���� ���, x, y ��ǥ�� �� �� �̻� ���� ���
	if ((t1->point1.x == t1->point2.x && t1->point2.x == t1->point3.x) || (t1->point1.y == t1->point2.y && t1->point2.y == t1->point3.y) ||	(t1->point1.x == t1->point2.x && t1->point1.y == t1->point2.y) || 
		(t1->point1.x == t1->point3.x && t1->point1.y == t1->point3.y) || (t1->point2.x == t1->point3.x && t1->point2.y == t1->point3.y) || ((t1->point1.x - t1->point1.y) == (t1->point2.x - t1->point2.y) && 
			(t1->point2.x - t1->point2.y) == (t1->point3.x - t1->point3.y))) 
		return 0;
	else 
		return 1;
}

// �ﰢ���� ���̸� ��ȯ�ϴ� �Լ�
double getArea(struct triangle* t1, double area)
{
	// �� ���� ��ǥ�� �� ��� �缱 ����(�Ź߲� ����)�� �̿��� ���̸� ����
	area = (1 / 2.0) * abs((t1->point1.x * t1->point2.y + t1->point2.x * t1->point3.y + t1->point3.x * t1->point1.y) - (t1->point2.x * t1->point1.y + t1->point3.x * t1->point2.y + t1->point1.x * t1->point3.y));
	return area;
}

int main(void)
{
	int cnt = 1;		// ���Ұ��� Ƚ���� �����ϴ� ������ ����
	double area = 0;	// �ﰢ���� ���̸� �����ϴ� �Ǽ��� ����
	srand(time(NULL));	// ���� ����
	printf("------------------------------------------------------\n");
	printf("      �ﰢ���� �����Ǵ� ���θ� Ȯ���ϴ� ���α׷�\n");
	printf("------------------------------------------------------\n");

	do {
		struct triangle t1 = { rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };	// triangle ����ü�� ����� ���ÿ� 1~10 ������ ���������� �ʱ�ȭ

		if (condition(&t1)) {	// �ﰢ���� �����Ǵ� ���θ� Ȯ���Ͽ� ������ ��ȯ�ϴ� �Լ��� ȣ��
			area = getArea(&t1, area);	// �ﰢ���� ���̸� ��ȯ�ϴ� �Լ��� ȣ���Ͽ� area�� ����
			printf("��1 (%d, %d)��ǥ, ��2 (%d, %d)��ǥ, ��3 (%d, %d)��ǥ, %.2lf\n", t1.point1.x, t1.point1.y, t1.point2.x, t1.point2.y, t1.point3.x, t1.point3.y, area);
			printf("------------------------------------------------------\n");
			break;
		}
		else {
			printf("			���Ұ�\n");
			printf("��1 (%d, %d)��ǥ, ��2 (%d, %d)��ǥ, ��3 (%d, %d)��ǥ\n", t1.point1.x, t1.point1.y, t1.point2.x, t1.point2.y, t1.point3.x, t1.point3.y);
			cnt++;
			srand(time(NULL) * cnt);		// cnt�� �����ִ� ���� : ���� �� ��µ��� �ʱ� ����(��ǻ���� �ӵ��� ���� ���� �ð��� �ݺ����� ���� ������ �Ȱ��� ���� ����)
			printf("------------------------------------------------------\n");
		}
	} while (1);

	return 0;
}



