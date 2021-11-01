#include <stdio.h>			// 표준 입출력 함수가 선언된 헤더파일을 포함

int main(void)
{
	int tmp;				// 실수를 정수로 바꿔서 저장하는 정수형 변수
	float num;				// 입력한 값을 실수형으로 저장하는 실수형 변수

	printf("실수 입력 : ");	// 큰 따옴표 안에 있는 문자열 출력
	scanf_s("%f", &num);	// 실수형 변수 num을 입력한 값으로 초기화
	tmp = num;				// 실수형 변수 num을 정수형 변수 tmp에 대입

	printf("입력한 값 : %f\n정수형으로 바꾼 값 : %f\n", num, (float)tmp);	// 각 %f는 num과 tmp를 출력
	// 경고 메세지 : float이 아닌 항목이 인수로 전달된다.
	// (float)tmp에서 (float)을 해주지 않으면 경고 메세지가 발생 -> %f는 실수형(float)을 출력하는 변환명세인데 정수형 변수를 실수형으로 출력하려고 했기 때문
	// 이를 해결하기 위해 정수형 변수 tmp를 float형으로 강제 형변환을 하여 경고 메세지를 없앰

	return 0;				// 정상종료
}



