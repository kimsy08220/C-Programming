#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

int b_rand()
{
	return rand() % 2;
}

int main(void)
{
	int num;
	char c;
	srand((unsigned)time(NULL));

	while (1)
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf_s("%d", &num);
		if (b_rand() == num)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n) : ");
		scanf_s(" %c", &c, 1);

		if (c == 'n')
			break;
	}
	return 0;
}