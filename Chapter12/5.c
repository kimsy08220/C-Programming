#include <stdio.h> // ���� ��û
#include <string.h>
#include <ctype.h>

int main(void)
{
	char c;

	do {
		printf("���ڸ� �Է��Ͻÿ� : ");
		c = getchar();

		if (islower(c))
			putchar(toupper(c));
		else if (isupper(c))
			putchar(tolower(c));
		printf("\n");
		fflush(stdin);
	} while (c != '.');
	return 0;
}