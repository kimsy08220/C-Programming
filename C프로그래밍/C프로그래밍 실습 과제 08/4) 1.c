#include <stdio.h>
#include <string.h>

int my_strlen(char *p);

int main(void)
{
	char str[80] = {"My name is KSY. My boyfriend is LHJ."};
	int length = strlen(str);
	printf("���ڿ��� ���� : %d\n", length);

	length = my_strlen(str);
	printf("���ڿ��� ���� : %d\n", length);
	return 0;
}

int my_strlen(char *p)
{
	int i = 0;
	while (p[i])
		i++;
	return i;
}