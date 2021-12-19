#include <stdio.h>

struct person
{
	char name[7], gender[3];
	int age;
};

void input_by_address(struct person *ptr);
void output_by_value(struct person shopper);

int main(void)
{
	struct person buyer;
	input_by_address(&buyer);

	printf("\n>> 구매자 정보 : ");
	output_by_value(buyer);

	return 0;
}

void input_by_address(struct person* ptr)
{
	printf("이름은? ");
	scanf_s("%s", ptr->name, 7);
	printf("성별은(남 또는 여)? ");
	scanf_s("%s", ptr->gender, 3);
	printf("나이는? ");
	scanf_s("%d", &ptr->age);
}
void output_by_value(struct person shopper)
{
	printf("%s(%s) %d세\n", shopper.name, shopper.gender, shopper.age);
}