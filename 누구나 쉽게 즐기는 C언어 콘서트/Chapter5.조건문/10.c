#include <stdio.h>

int main(void)
{
	char grade;

	printf("������ �Է��Ͻÿ� : ");
	grade = getchar();

	switch (grade)
	{
	case 'A': printf("���� ���߾��!\n");
		break;
	case 'B': printf("�����ϴ�.\n");
		break;
	case 'C': printf("�����������ϴ�.\n");
		break;
	case 'D': printf("�� ����غ�����.\n");
		break;
	case 'F': printf("��Ÿ�����ϴ�.\n");
		break;
	default: printf("A,B,C,D,F �� �Է����ּ���.\n");
		break;
	}

	return 0;
}