#include <stdio.h>		// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)
#include <string.h>		// 문자열을 다룰 수 있는 헤더파일을 포함시켜 사용 (strcpy, strlen 등)

// 입력 문자열과 삭제될 문자를 입력받는 함수
char input_message(char* message, char delete_message)
{
	printf("입력 문자열 : ");
	gets_s(message, 100);

	printf("입력 문자열에서 삭제될 문자 : ");
	delete_message = getchar();

	return delete_message;
}

// 입력 문자열에서 삭제될 문자를 삭제하는 함수
void delete_char(char* message, char delete_message)
{
	for (char* c = message; *message != NULL; message++) {	// NULL 문자가 아닐 경우 계속 반복, 즉 NULL 문자를 만날 때까지 반복
		if (*message == delete_message) {	// 입력 문자열 중 삭제할 문자와 같은 경우
			strcpy_s(message, strlen(message) + 1, message + 1);	// 문자열의 위치를 당기기 위해 문자열을 복사
			message--;		// 건너뛰는 것을 방지하기 위해 원래 상태로 되돌리기 위함
		}
	}
}

// 메인 함수(프로그램 시작)
int main(void)
{
	char message[100];			// 입력 문자열을 저장하는 문자형 배열
	char delete_message = ' ';	// 삭제할 문자를 저장하는 문자형 변수
	
	delete_message = input_message(message, delete_message);	// 입력 문자열과 삭제할 문자를 입력받는 함수 호출
	delete_char(message, delete_message);	// 입력 문자열에서 삭제될 문자를 삭제하는 함수 호출
	
	printf("출력 문자열 : %s\n", message);
	return 0;
}



