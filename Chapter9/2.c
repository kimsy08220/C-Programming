#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void get_dice_face()
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, num;

	while (1)
	{
		for (int i = 0; i < 100; i++)
			num = rand() % 6 + 1;
		if (num == 1)
			n1++;
		else if (num == 2)
			n2++;
		else if (num == 3)
			n3++;
		else if (num == 4)
			n4++;
		else if (num == 5)
			n5++;
		else if (num == 6)
			n6++;
		if (n1 + n2 + n3 + n4 + n5 + n6 == 100)
			break;
	}
	
	printf("1->%d\n", n1);
	printf("2->%d\n", n2);
	printf("3->%d\n", n3);
	printf("4->%d\n", n4);
	printf("5->%d\n", n5);
	printf("6->%d\n", n6);
}

int main(void)
{
	srand((unsigned)time(NULL));
	get_dice_face();
	return 0;
}