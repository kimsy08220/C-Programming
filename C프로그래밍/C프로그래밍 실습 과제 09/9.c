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
	printf("	�޿��� %d����(���) �̻��� ���� ����", average);
	printf("\n--------------------------------------------------------\n");
	list(employee, average);
	printf("--------------------------------------------------------\n");
}

int salary(struct employee_info employee[])
{
	int average = 0, sum = 0;

	printf(">> ������ ����(�̸�, ID, �޿�)�� �Է��ϼ���. <<\n");
	for (int i = 0; i < 5; i++) {
		printf("%d�� : ", i + 1);
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
			printf("\t\t%s\t %d����\n", employee[i].id, employee[i].salary);
	}
}