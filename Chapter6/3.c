#include <stdio.h> 

int main(void)
{
	int n1, n2, n3, min = 0;

	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 < n2)
	{
		if (n1 > n3)
			min = n3;
		else
			min = n1;
	}
	else
	{
		if (n2 > n3)
			min = n3;
		else
			min = n2;
	}

	printf("제일 작은 정수는 %d 입니다.\n", min);
	return 0;
}