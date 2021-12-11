#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("학점 : %c\n", grade);
	return 0;
}