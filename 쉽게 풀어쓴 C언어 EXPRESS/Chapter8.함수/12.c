#include <stdio.h>

void print_value(int n)
{
	for (int i = 0; i < n; i++)
		printf("*");
}

int main(void)
{
	int num; 
	 
	while (1)
	{
		printf("값을 입력하시오(종료는 음수) : ");
		scanf_s("%d", &num);
		if (num == -1)
			break;
		print_value(num);
		printf("\n");
	}
	return 0;
}