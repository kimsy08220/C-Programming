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

	printf("사람의 이름은? ");
	scanf_s("%s", p.name, 20);
	printf("사람의 성별은? ");
	scanf_s("%s", p.gender, 10);
	printf("사람의 나이는? ");
	scanf_s("%d", &p.age);

	printf("사람의 이름 : %s, 사람의 성별 : %s, 사람의 나이 : %d\n", p.name, p.gender, p.age);
	return 0;
}