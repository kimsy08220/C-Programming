#include <stdio.h>
#include <string.h>

int get_response(char* prompt)
{
	if (strcmp(prompt, "no") == 0 || strcmp(prompt, "n") == 0 || strcmp(prompt, "N") == 0 || strcmp(prompt, "NO") == 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	char str[100];

	printf("������ �Ͻðڽ��ϱ�? ");
	gets(str);

	if (get_response(str))
		printf("�������� �亯\n");
	else
		printf("�������� �亯\n");

	return 0;
}