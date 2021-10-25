#include <stdio.h>

int main(void)
{
	double num, inch, cm;
	char c;

	printf("입력 단위가 cm이면 \'c\'나 \'C\'를, inch이면 \'i\'나 \'I\'를 입력하세요.\n");
	printf("입력 단위  : ");
	scanf_s("%c", &c, sizeof(c));

	if (c == 'c' || c == 'C')
	{
		printf("입력 값  : ");
		scanf_s("%lf", &cm);

		inch = cm / 2.54;
		printf("입력한 %.2lfcm는 %.2lfinch입니다.\n", cm, inch);
	}
	else if (c == 'i' || c == 'I')
	{
		printf("입력 값  : ");
		scanf_s("%lf", &inch);

		cm = 2.54 * inch;
		printf("입력한 %.2lfinch는 %.2lfcm입니다.\n", inch, cm);

	}
	else
		printf("잘못된 값입니다.\n");
	return 0;
}