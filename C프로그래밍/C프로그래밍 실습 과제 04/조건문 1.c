#include <stdio.h>

int main(void)
{
	int temperature;

	printf("�µ� �Է� : ");
	scanf_s("%d", &temperature);
	
	printf("���� �µ��� ");
	if (temperature < 0)
	{
		printf("���� ");
		temperature = -temperature;
	}

	printf("%d���Դϴ�.\n", temperature);

	return 0;
}