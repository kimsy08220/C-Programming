#include <stdio.h>
#include <string.h>

int main(void)
{
	int cnt = 1;
	char str[100], *token;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str);

	token = strtok_s(str, " ", 100);
	
	if (token) {
		while (token = strtok_s(NULL, " ", 100))
			cnt++;
	}

	printf("�ܾ��� ���� %d�Դϴ�.\n", cnt);
	return 0;
}