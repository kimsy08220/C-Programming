#include <stdio.h>
#define PERSONS 30
#define STARS 6	

int main(void) {
	int survey[PERSONS] = { 1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2, 1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };
	int vote[STARS] = {0};

	for (int i = 0; i < PERSONS; i++)
		vote[survey[i]]++;

	printf("연예인 득표수\n");
	printf("==============\n");
	for (int i = 1; i < STARS; i++)
		printf("  %d번   %d표\n", i, vote[i]);

	return 0;
}