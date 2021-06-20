#include <stdio.h>
#include <string.h>

int main(void)
{
	int cnt = 1;
	char str[100], *token;

	printf("문자열을 입력하시오 : ");
	gets_s(str);

	token = strtok_s(str, " ", 100);
	
	if (token) {
		while (token = strtok_s(NULL, " ", 100))
			cnt++;
	}

	printf("단어의 수는 %d입니다.\n", cnt);
	return 0;
}