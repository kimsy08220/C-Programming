#include <stdio.h>  
#include <math.h>

double sin_degree(double degree)
{
	return sin((3.141592 * degree) / 180);
}

int main(void)
{
	printf("sin(0.0000000)의 값은 %lf\n", sin_degree(0));
	printf("sin(10.0000000)의 값은 %lf\n", sin_degree(10));
	printf("sin(20.0000000)의 값은 %lf\n", sin_degree(20));
	printf("sin(30.0000000)의 값은 %lf\n", sin_degree(30));
	printf("sin(40.0000000)의 값은 %lf\n", sin_degree(40));
	printf("sin(50.0000000)의 값은 %lf\n", sin_degree(50));
	printf("sin(60.0000000)의 값은 %lf\n", sin_degree(60));
	printf("sin(70.0000000)의 값은 %lf\n", sin_degree(70));
	printf("sin(80.0000000)의 값은 %lf\n", sin_degree(80));
	printf("sin(90.0000000)의 값은 %lf\n", sin_degree(90));
	printf("sin(100.0000000)의 값은 %lf\n", sin_degree(100));
	printf("sin(110.0000000)의 값은 %lf\n", sin_degree(110));
	printf("sin(120.0000000)의 값은 %lf\n", sin_degree(120));
	printf("sin(130.0000000)의 값은 %lf\n", sin_degree(130));
	printf("sin(140.0000000)의 값은 %lf\n", sin_degree(140));
	printf("sin(150.0000000)의 값은 %lf\n", sin_degree(150));
	printf("sin(160.0000000)의 값은 %lf\n", sin_degree(160));
	printf("sin(170.0000000)의 값은 %lf\n", sin_degree(170));
	printf("sin(180.0000000)의 값은 %lf\n", sin_degree(180));
	return 0;
}