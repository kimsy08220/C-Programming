#include <stdio.h>

// �������� 5��
struct employee_info
{
	char no[20];
	char name[9];
	int children;
	int pay;
};

// �������� 6��
int main(void)
{
	struct employee_info e;
	int child_money = 0;

	printf("�����ȣ��? ");
	scanf_s("%s", e.no, 20);
	printf("����̸���? ");
	scanf_s("%s", e.name, 9);
	printf("����� �ڳ����? ");
	scanf_s("%d", &e.children);
	printf("����� �޿���? ");
	scanf_s("%d", &e.pay);

	printf("�����ȣ : %s, ����̸� : %s, ����� �ڳ�� : %d, ����� �޿� : %d\n\n", e.no, e.name, e.children, e.pay);

	// �������� 7��
	if (e.children == 1)
		child_money = 100000;
	else if (e.children >= 2)
		child_money = 200000;
	printf("�����ȣ	�̸�	�⺻��		�ڳ��	�ڳ����\n");
	printf("----------------------------------------------------------------------------------\n");
	printf("%s		%s	%d��	%d��	%d��\n", e.no, e.name, e.pay, e.children, child_money);
	return 0;
}