#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) 
{
	char s[100], * p;
	
	printf("문자열을 입력하시오 : ");
	gets_s(s, 100);

	p = s;
	while (*p != '\0') {
		*p = toupper(*p);
		p++;
	}
	printf("대문자로 변환한 결과 : %s\n", s);

	for (int i = 0; i < strlen(s); i++)
		s[i] = tolower(s[i]);
	printf("소문자로 변환한 결과 : %s\n", s);
}