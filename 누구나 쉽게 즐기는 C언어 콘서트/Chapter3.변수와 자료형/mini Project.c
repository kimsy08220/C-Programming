#include <stdio.h>

int main(void)
{
	int age, id, num;
	double star;
	char ch;

	printf("나이를 입력하시오 : ");
	scanf_s("%d", &age);
	printf("나이 : %d\n", age);

	printf("직원의 아이디를 입력하시오 : ");
	scanf_s("%d", &id);
	printf("아이디 : %d\n", id);

	printf("생산량을 입력하시오 : ");
	scanf_s("%d", &num);
	printf("생산량 : %d\n", num);

	printf("별의 개수를 입력하시오 : ");
	scanf_s("%lf", &star);
	printf("나이 : %le\n", star);

	getchar();		// 문자를 입력받을 때 앞전에 엔터키가 줄바꿈 문자로 바뀌어서 입력버퍼에 남아있다. 띠리사 이것을 없애줌
	printf("글자를 입력하시오 : ");
	scanf_s("%c", &ch, sizeof(ch));
	printf("글자 : %c\n", ch);

	return 0;
}