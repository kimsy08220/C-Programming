#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf. scanf_s 등)
#include <math.h>	// 여러 수학 함수들이 선언된 헤더파일을 포함시켜 사용 (abs, sqrt 등)

int main(void)
{
	int side1, side2, side3;	// 삼각형의 세 변의 길이를 저장하는 정수형 변수 
	double area = 0;			// 삼각형의 넓이를 저장하는 실수형 변수

	printf("삼각형 세 변의 길이를 입력 : ");	// 큰 따옴표 안에 있는 문자열 출력
	scanf_s("%d%d%d", &side1, &side2, &side3);
	// 정수형 변수 side1, side2, side3를 입력한 순서대로 각각 초기화

	area = 1.0 / 4.0 * sqrt((side1 + side2 + side3) * (side1 + side2 - side3) * (side2 + side3 - side1) * (side3 + side1 - side2));
	// 헤론의 공식(세 변의 길이만 제시한 채 넓이를 구하는 공식)을 적용하여 실수형 변수 area에 대입

	printf("삼각형의 넓이 : %lf\n", area);	// 헤론의 공식으로 구한 삼각형 넓이 area를 %lf를 통해 출력
	return 0;	// 정상종료
}






