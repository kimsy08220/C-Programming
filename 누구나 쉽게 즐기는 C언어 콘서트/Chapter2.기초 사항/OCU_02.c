#include <stdio.h>		// 표준 입출력 함수가 선언된 헤더파일을 포함

int main(void) {
	int gram;			// 무게를 입력받을 정수형 변수
	double kilogram;	// g을 kg으로 변환하여 저장할 실수형 변수

	printf("kg으로 변경할 gram 입력 : ");	// 큰 따옴표 안에 있는 문자열 출력
	scanf_s("%d", &gram);	// 정수형 변수 gram을 입력한 값으로 초기화

	kilogram = gram * 0.001;	// g을 kg으로 변환하기 위해 (입력값) * 0.001하여 kilogram이라는 실수형 변수에 저장

	printf("%dg = %.3lfkg\n", gram, kilogram);	// %d에는 gram을, %.3lf에는 소수점 3자리인 kilogram을 출력
	// %d : 정수형 변수 출력, %lf : 실수형 변수 출력
	return(0);			// 정상종료
}




