#include <stdio.h>

int pass(int number);
void print(int prt);

int main(void)
{
	int absence = 5;
	int prt = pass(absence);

	print(prt);
	return 0;
}

int pass(int number)
{
	int limit = 6;
	if (number < limit)
		return 1;
	else
		return 0;
}

void print(int prt)
{
	if (prt)
		printf("���\n");
	else
		printf("����\n");
}