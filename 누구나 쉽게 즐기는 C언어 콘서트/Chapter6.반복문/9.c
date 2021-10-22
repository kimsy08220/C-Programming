#include <stdio.h>
// ???

int main(void)
{
	int cnt = 0;
	char c;

	while (1) {
		printf("문자를 입력하시오 : (종료 .)");
		scanf_s(" %c", &c, sizeof(c));	// Enter : 아스키코드 10이므로 Enter도 입력으로 받는 것
		// 일반적인 '%c'는 화이트 스페이스(white space)까지 모두 문자로 인식하지만 화이트 스페이스(white space)를 제외한 문자를 인식 받을때에는 '%c'앞에 화이트 스페이스(white space)를 입력한다

		//c = getchar();

		if (c == 'a')
			cnt++;
		if (c == '.') {
			printf("a의 개수 = %d\n", cnt);
			break;
		}
	}
	return 0;
}