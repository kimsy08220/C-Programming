#include <stdio.h>

int main(void)
{
	double num, cnt, result = 1.0;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &cnt);

	while (cnt != 0)
	{
		result *= num;
		cnt--;
	}
	
	printf("������� %f\n", result);
	return 0;
}