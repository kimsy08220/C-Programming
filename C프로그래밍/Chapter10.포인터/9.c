#include <stdio.h>
#include <string.h>

int main(void)
{
	char* ptr, word[] = "Bye!";
	ptr = word + strlen(word);
	while (--ptr >= word)
		puts(ptr);
	return 0;
}