#include <stdio.h>

int main(void)
{
	char ch;
	char* cptr;

	printf("���� ���� char �Է� : ");
	ch = getchar();

	cptr = &ch;
	printf("char�� �� : %c\n", ch);

	for (char c = ch; c <= 'z'; c++) {
		cptr = &c;
		printf("%c", c);
	}
	printf("\n");

	return 0;
}