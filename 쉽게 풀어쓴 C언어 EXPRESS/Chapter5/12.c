#include <stdio.h>

int main(void)
{
	char a,b,c,d;
	unsigned int num = 0;

	printf("첫번째 문자를 입력하시오 : ");
	scanf_s("%c", &a); 

	printf("두번째 문자를 입력하시오 : ");
	scanf_s(" %c", &b); // 공백의 의미 : scanf로 입력받을 시에 직접적으로 사용되지 않는 문자들(공백, 줄바꿈 등)은 버퍼에 그대로 남아있게 되는데, %c가 그것들을 사용하려고 해서 그렇습니다.

	printf("세번째 문자를 입력하시오 : ");
	scanf_s(" %c", &c);

	printf("네번째 문자를 입력하시오 : ");
	scanf_s(" %c", &d);

	num = (d << 24) | (c << 16) | (b << 8) | a;
	printf("결과값 : %x\n", num);

	return 0;
}