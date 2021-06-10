#include <stdio.h>

void show_digit(int x)
{
	if(x/10 > 0)
		show_digit(x / 10);
	printf("%d ", x%10);
}

int main(void)
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	show_digit(n);
	printf("\n");
	return 0;
}