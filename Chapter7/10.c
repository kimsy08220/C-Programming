#include <stdio.h>

int main(void)
{
	double num, cnt, result = 1.0;

	printf("실수의 값을 입력하시오 : ");
	scanf_s("%lf", &num);
	printf("거듭제곱횟수를 입력하시오 : ");
	scanf_s("%lf", &cnt);

	while (cnt != 0)
	{
		result *= num;
		cnt--;
	}
	
	printf("결과값은 %f\n", result);
	return 0;
}