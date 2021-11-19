#include <stdio.h>

int main(void)
{
	char* ptr, note[] = "See you at the snack bar!";
	ptr = note;
	puts(ptr);
	ptr++;
	puts(++ptr);
	note[7] = "!";	// 아스키코드 : 33, 
	note[8] = "\0"; //아스키코드 : 0, 
	puts(note);
	return 0;
}