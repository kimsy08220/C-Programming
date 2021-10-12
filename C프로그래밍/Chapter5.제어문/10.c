#include <stdio.h>

int main(void)
{
	int num, calc, result = 0;

	printf("수 입력  : ");
	scanf_s("%d", &num);
	printf("계산법(1, 2, 3)  : ");
	scanf_s("%d", &calc);

	switch (calc)
	{
	case 1: printf("입력한 수는 %d입니다.\n", num);
		break;
	case 2: 
		result = num * 2;
		printf("입력한 수 %d의 2배수는 %d입니다.\n", num, result);
		break;
	case 3: 
		result = num * 3;
		printf("입력한 수 %d의 3배수는 %d입니다.\n", num, result);
		break;
	default: printf("잘못된 연산자입니다.\n");
	}

	return 0;
}