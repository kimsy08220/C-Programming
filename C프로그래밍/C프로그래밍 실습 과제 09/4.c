#include <stdio.h>

struct person
{
	char name[20];
	char gender[10];
	int age;
};

int main(void)
{
	struct person p;

	printf("����� �̸���? ");
	scanf_s("%s", p.name, 20);
	printf("����� ������? ");
	scanf_s("%s", p.gender, 10);
	printf("����� ���̴�? ");
	scanf_s("%d", &p.age);

	printf("����� �̸� : %s, ����� ���� : %s, ����� ���� : %d\n", p.name, p.gender, p.age);
	return 0;
}