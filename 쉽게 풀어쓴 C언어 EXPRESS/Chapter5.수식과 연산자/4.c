#include <stdio.h>

int main(void)
{
	int cm, ft;
	double inch;

	printf("키를 입력하시오(cm) : ");
	scanf_s("%d", &cm);

	inch = cm / 2.54;
	ft = inch / 12;

	printf("%dcm는 %d피트 %f인치입니다.\n", cm, ft, inch);
	return 0;
}