#include <stdio.h>
#include <conio.h>

int main(void) {
	int alphabet[26] = { 0 };
	int i = 0;
	char ch;

	while (i < 10) {
		ch = _getche();
		// ch = _getch();
		alphabet[ch - 'a']++;
		i++;
	}

	printf("\n¾ËÆÄºª ºóµµ¼ö\n");
	printf("==============\n");
	for (int i = 97; i < 123; i++)
		printf("  %c       %d\n", i, alphabet[i-97]);
	return 0;
}