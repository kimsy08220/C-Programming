#include <stdio.h>

int main(void)
{
	int math, phy, chem;

	printf("����, ����, ȭ�� ������ ���ٿ� �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &math, &phy, &chem);

	if (math >= 50 && phy >= 50 && chem >= 50)
	{
		if (math + phy >= 150 || math + chem >= 150)
			printf("������ �� �ֽ��ϴ�.\n");
		else
			printf("������ �� �����ϴ�.\n");
	}
	else
		printf("������ �� �����ϴ�.\n");

	return 0;
}