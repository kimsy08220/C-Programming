#include <stdio.h>

// 연습문제 5번
struct employee_info
{
	char no[20];
	char name[9];
	int children;
	int pay;
};

// 연습문제 6번
int main(void)
{
	struct employee_info e;
	int child_money = 0;

	printf("사원번호는? ");
	scanf_s("%s", e.no, 20);
	printf("사원이름은? ");
	scanf_s("%s", e.name, 9);
	printf("사원의 자녀수는? ");
	scanf_s("%d", &e.children);
	printf("사원의 급여는? ");
	scanf_s("%d", &e.pay);

	printf("사원번호 : %s, 사원이름 : %s, 사원의 자녀수 : %d, 사원의 급여 : %d\n\n", e.no, e.name, e.children, e.pay);

	// 연습문제 7번
	if (e.children == 1)
		child_money = 100000;
	else if (e.children >= 2)
		child_money = 200000;
	printf("사원번호	이름	기본금		자녀수	자녀수당\n");
	printf("----------------------------------------------------------------------------------\n");
	printf("%s		%s	%d원	%d명	%d원\n", e.no, e.name, e.pay, e.children, child_money);
	return 0;
}