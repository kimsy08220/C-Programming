#include <stdio.h>

struct employee_info
{
	char name[7];
	char id[10];
	int salary;
};

int salary(struct employee_info employee[]);
void list(struct employee_info employee[], int average);

int main(void)
{
	struct employee_info employee[5];
	int average = 0;
	average = salary(employee);


	printf("\n--------------------------------------------------------\n");
	printf("	급여가 %d만원(평균) 이상인 직원 정보", average);
	printf("\n--------------------------------------------------------\n");
	list(employee, average);
	printf("--------------------------------------------------------\n");
}

int salary(struct employee_info employee[])
{
	int average = 0, sum = 0;

	printf(">> 직원의 정보(이름, ID, 급여)를 입력하세요. <<\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번 : ", i + 1);
		scanf_s("%s %s %d", employee[i].name, 7, employee[i].id, 10, &employee[i].salary);
		sum += employee[i].salary;
	}
	average = sum / 5;
	return average;
}

void list(struct employee_info employee[], int average)
{
	for (int i = 0; i < 5; i++) {
		if (employee[i].salary >= average)
			printf("\t\t%s\t %d만원\n", employee[i].id, employee[i].salary);
	}
}