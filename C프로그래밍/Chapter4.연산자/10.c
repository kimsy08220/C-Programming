#include <stdio.h>

int main(void)
{
	int  num, second = 0, minute = 0, hour = 0;

	printf("��(sec)�Է� : ");
	scanf_s("%d", &num);

	hour = num / 60 / 60;
	minute = num / 60 % 60;
	second = num % 60 % 60;

	printf(">> �Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", num, hour, minute, second);
	return 0;
}