#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) 
{
	char s[100], * p;
	
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, 100);

	p = s;
	while (*p != '\0') {
		*p = toupper(*p);
		p++;
	}
	printf("�빮�ڷ� ��ȯ�� ��� : %s\n", s);

	for (int i = 0; i < strlen(s); i++)
		s[i] = tolower(s[i]);
	printf("�ҹ��ڷ� ��ȯ�� ��� : %s\n", s);
}