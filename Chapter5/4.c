#include <stdio.h>

int main(void)
{
	int cm, ft;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf_s("%d", &cm);

	inch = cm / 2.54;
	ft = inch / 12;

	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�.\n", cm, ft, inch);
	return 0;
}