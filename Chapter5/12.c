#include <stdio.h>

int main(void)
{
	char a,b,c,d;
	unsigned int num = 0;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a); 

	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &b); // ������ �ǹ� : scanf�� �Է¹��� �ÿ� ���������� ������ �ʴ� ���ڵ�(����, �ٹٲ� ��)�� ���ۿ� �״�� �����ְ� �Ǵµ�, %c�� �װ͵��� ����Ϸ��� �ؼ� �׷����ϴ�.

	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &c);

	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &d);

	num = (d << 24) | (c << 16) | (b << 8) | a;
	printf("����� : %x\n", num);

	return 0;
}