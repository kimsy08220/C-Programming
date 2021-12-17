#include <stdio.h>
#include <string.h>

int my_strcmp(char* p1, char* p2);

int main(void)
{
	char str1[80] = "My name is KSY. My boyfriend is LHJ.";
	char str2[80] = "My name is KSY. My boyfriend is LHJ.";

	if (strcmp(str1, str2) == 0)
		printf("두 개의 문자열은 같습니다.\n");
	else
		printf("두 개의 문자열은 다릅니다.\n");

	if (my_strcmp(str1, str2) == 0)
		printf("두 개의 문자열은 같습니다.\n");
	else
		printf("두 개의 문자열은 다릅니다.\n");
	return 0;
}

int my_strcmp(char* p1, char* p2)
{
	char c1, c2;

	while (1) {
		c1 = *p1++;
		c2 = *p2++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}