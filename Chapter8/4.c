#include <stdio.h>

int is_leap(int year)
{
	if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
		return 1;
	else 
		return 0;
}

int main(void)
{
	int year;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);

	if (is_leap(year))
		printf("%d���� 366���Դϴ�.\n",year);
	else
		printf("%d���� 365���Դϴ�.\n", year);
	return 0;
}