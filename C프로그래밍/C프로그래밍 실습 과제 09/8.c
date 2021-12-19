#include <stdio.h>

struct person
{
	char name[7], gender[3];
	int age;
};

void input_by_address(struct person* ptr);
void output_by_value(struct person ptr[]);

int main(void)
{
	struct person buyers[10];
	input_by_address(buyers);
	output_by_value(buyers);
	return 0;
}

void input_by_address(struct person* ptr)
{
	for (int i = 0;i < 10;i++) {
		printf("이름은? ");
		scanf_s("%s", ptr->name, 7);
		printf("성별은(남 또는 여)? ");
		scanf_s("%s", ptr->gender, 3);
		printf("나이는? ");
		scanf_s("%d", &ptr->age);
		printf("----------------------\n");
		ptr++;
	}
	
}
void output_by_value(struct person ptr[])
{
	for (int i = 0; i < 10; i++)
		printf("%s(%s) %d세\n", (ptr + i)->name, (ptr + i)->gender, (ptr + i)->age);
}