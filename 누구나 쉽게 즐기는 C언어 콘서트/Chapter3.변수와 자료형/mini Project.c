#include <stdio.h>

int main(void)
{
	int age, id, num;
	double star;
	char ch;

	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);
	printf("���� : %d\n", age);

	printf("������ ���̵� �Է��Ͻÿ� : ");
	scanf_s("%d", &id);
	printf("���̵� : %d\n", id);

	printf("���귮�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("���귮 : %d\n", num);

	printf("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &star);
	printf("���� : %le\n", star);

	getchar();		// ���ڸ� �Է¹��� �� ������ ����Ű�� �ٹٲ� ���ڷ� �ٲ� �Է¹��ۿ� �����ִ�. �츮�� �̰��� ������
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &ch, sizeof(ch));
	printf("���� : %c\n", ch);

	return 0;
}