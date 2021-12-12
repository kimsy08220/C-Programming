#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rand_num rand() % 100

int main(void) {
	int num[5] = {5, 2, 3, 6, 4};
	srand(time(NULL));
	//int num[5] = { rand_num, rand_num, rand_num , rand_num , rand_num };
	//int num[5] = { 5, 19, 91, 53, 79 };

	// 1)
	for (int i = 0; i < 5; i++)
		printf("%d ", num[i]);
	printf("\n");

	// 2)
	int cnt = 0;
	for (int i = 0; i < 5; i++)
		if (num[i] % 2 == 0)
			cnt++;
	printf("짝수인 원소의 개수 : %d\n", cnt);

	// 3)
	int sum = 0;
	for (int i = 0; i < 5; i++)
		if (num[i] % 2 == 0)
			sum += num[i];
	printf("짝수인 원소의 합 : %d\n", sum);

	// 4)
	cnt = 0;
	for (int i = 0; i < 5; i++)
		if (num[i] % 3 == 0)
			cnt++;
	printf("3의 배수인 수의 개수 : %d\n", cnt);

	// 5)
	/*int first_max = num[0];
	for (int i = 1; i < 5; i++)
		if (first_max < num[i]) 
			first_max = num[i];
	printf("first_max = %d\n", first_max);*/

	int first_max = num[0];
	int second_max = 0;

	for (int i = 1; i < 5; i++) {
		if (first_max < num[i]) {
			second_max = first_max;
			first_max = num[i];
		}
		else if (second_max <= num[i])
			second_max = num[i];
	}

	//for (int i = 1; i < 5; i++)
	//	if (first_max < num[i])
	//		first_max = num[i];

	//for (int i = 0; i < 5; i++) // ???
	//	if (num[i] < first_max)
	//		second_max = num[i];
	printf("first_max = %d\nsecond_max = %d\n", first_max, second_max);
	return 0;
}