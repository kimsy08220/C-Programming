#include <stdio.h>
#include <string.h>
#define MAX 80

char* my_strcpy_s(char* to, int size, char *from);

int main(void)
{
	char from[MAX] = { "My name is KSY." };
	char to[MAX];

	/*strcpy_s(to, MAX, from);
	printf("from[80] : %s\n", from);
	printf("to[80] : %s\n", to);*/

	my_strcpy_s(to, MAX, from);
	printf("from[80] : %s\n", from);
	printf("to[80] : %s\n", to);

	return 0;
}

char* my_strcpy_s(char* to, int size, char* from)
{
	for (int i = 0; i < size; i++) {
		to[i] = from[i];
		if (from[i] == '\0')
			break;
	}
	return to;
}