#include <stdio.h>

int main(void)
{
	int cm, age;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf_s("%d", &cm);
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);

	if (cm >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.\n");
	else
		printf("�˼��մϴ�.\n");
	return 0;
}