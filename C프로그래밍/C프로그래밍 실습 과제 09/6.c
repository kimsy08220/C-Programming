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

		printf("이름 : ");
		scanf_s("%s", user[i].name, 7);
		printf("성별 : ");
		scanf_s("%s", user[i].gender, 3);
		printf("나이 : ");
		scanf_s("%d", &user[i].age);
		printf("-----------------------\n\n");
	}

	int male = 0, female = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		if (strcmp(user[i].gender, "남") == 0)
			male++;
		else
			female++;
		sum += user[i].age;
	}

	printf("	이름	성별	나이\n");
	printf("========================================\n");
	for (int i = 0; i < 10; i++)
		printf("	%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	printf("========================================\n");
	printf(">> 남자 : %d명\n", male);
	printf(">> 여자 : %d명\n", female);
	printf(">> 평균 연령 : %d살\n", sum / 10);
	return 0;
}