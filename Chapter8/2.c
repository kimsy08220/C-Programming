#include <stdio.h>

int check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	else
		return 0;
}

int main(void)
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ� : ");
	ch = getchar();
	
	if(check_alpha(ch))
		printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", ch);
	return 0;
}