#include <stdio.h>
#include <string.h>

struct person
{
	char name[7];
	char gender[3];
	int age;
};

int main(void)
{
	struct person user[10];

	for (int i = 0; i < 10; i++) {

		printf("�̸� : ");
		scanf_s("%s", user[i].name, 7);
		printf("���� : ");
		scanf_s("%s", user[i].gender, 3);
		printf("���� : ");
		scanf_s("%d", &user[i].age);
		printf("-----------------------\n\n");
	}

	int male = 0, female = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		if (strcmp(user[i].gender, "��") == 0)
			male++;
		else
			female++;
		sum += user[i].age;
	}

	printf("	�̸�	����	����\n");
	printf("========================================\n");
	for (int i = 0; i < 10; i++)
		printf("	%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	printf("========================================\n");
	printf(">> ���� : %d��\n", male);
	printf(">> ���� : %d��\n", female);
	printf(">> ��� ���� : %d��\n", sum / 10);
	return 0;
}