#include <stdio.h>
#include <stdlib.h> // rand, srand �Լ�
#include <time.h> // time �Լ�

int main(void)
{
	int user, com ;

	printf("�����Ͻÿ�(1 : ����, 2 : ����, 3 : ��) : ");
	scanf_s("%d", &user);

	srand((unsigned)time(NULL)); // �Ź� �ٸ� ���� ����
	com = rand() % 3 + 1;

	if (user == com)
		printf("���\n");
	if (user == 1)
	{
		if (com == 2)
			printf("��ǻ�Ͱ� �̰���\n");
		else
			printf("����ڰ� �̰���\n");
	}
	else if (user == 2)
	{
		if (com == 1)
			printf("����ڰ� �̰���\n");
		else
			printf("��ǻ�Ͱ� �̰���\n");
	}
	else
	{
		if(com == 1)
			printf("��ǻ�Ͱ� �̰���\n");
		else
			printf("����ڰ� �̰���\n");

	}
	return 0;
}