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

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	show_digit(n);
	printf("\n");
	return 0;
}