#include <stdio.h> 
#include <string.h>

void space_delete(char* str)
{
	char tmp[100];

	int k = 0;

	for (int i = 0;i < strlen(str);i++) 
		if (str[i] != ' ')
			tmp[k++] = str[i];
	tmp[k] = 0;
	strcpy(str, tmp);
}

int main(void)
{
	char str[100];

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ� : ");
	gets(str);
	space_delete(str);
	printf("%s\n", str);

	return 0;
}