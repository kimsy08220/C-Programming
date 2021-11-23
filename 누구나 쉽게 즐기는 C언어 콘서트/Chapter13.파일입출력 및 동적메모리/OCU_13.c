#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (fopen_s, fclose 등)

// 텍스트 파일에 있는 문자열을 화면에 출력하고 할당된 동적 메모리를 반환하는 함수
void finish(char* sample[10], int iterator) {
	for (int i = 0; i < iterator; i++) {
		printf("%s", sample[i]);	
		free(sample[i]);
	}
}

// 동적 메모리 할당과 텍스트 파일에 있는 문자열을 읽고 저장하는 함수
void allocate(FILE* fp) {

	char* sample[10];	// 텍스트 파일에 있는 문자열을 저장하는 char형 포인터
	char* line;			// 텍스트 파일에 있는 문자열을 읽는 char형 포인터
	int i = 0;			

	while (!feof(fp))	// 파일의 끝에 도달할 경우
	{
		line = (char*)malloc(200 * sizeof(char));	// line 문자열에 동적 메모리 할당
		if (line != NULL)	// 동적 메모리가 할당된 경우
		{
			line = fgets(line, 200 * sizeof(char), fp);	// 텍스트 파일에 있는 문자열을 읽고 line 문자열에 저장
			sample[i] = line;	// sample 문자열 배열에 line 문자열을 저장
			i++;				// 다음 문자열을 읽기 위함
		}
	}
	finish(sample, i);  // 출력과 할당된 메모리를 반환
}
int main(void) {

	FILE* fp = NULL;	// 텍스트 파일을 가리키는 FILE형 포인터

	fopen_s(&fp, "sample.txt", "r");	// 파일을 읽기 모드로 열어 fp에 저장
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("					     sample.txt 파일 읽고 쓰기\n");
	printf("------------------------------------------------------------------------------------------------------------------\n");

	if (fp != NULL)		// fp가 NULL이 아닐 경우 즉, 파일이 성공적으로 열린 경우
		allocate(fp);
	else
		printf("파일 열기 실패\n");
	printf("\n------------------------------------------------------------------------------------------------------------------\n\n");

	fclose(fp);		// fp와 연관된 것들을 모두 삭제하고 닫음
	return 0;
}













