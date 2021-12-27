#include <stdio.h>
#include <stdlib.h>

struct book_info
{
	int year;
	char title[12];
};
typedef struct book_info BOOK;

void init_lib(BOOK * books, int size);
void prn_lib(BOOK* books, int size);

int main(void)
{
	BOOK* books;
	int size;

	do {
		printf("정보를 입력할 도서 권수 : ");
		scanf_s("%d", &size);
		if (size <= 0)
			printf("에러 : 권수를 잘못 입력하였습니다. 다시 입력하세요\n");
	} while (size <= 0);

	books = (BOOK*)malloc(sizeof(BOOK) * size);
	if (books == NULL) {
		puts("동적 기억장소 할당에 실패하였습니다.\n");
		exit(1);
	}

	init_lib(books, size);
	prn_lib(books, size);
	
	free(books);
	return 0;
}

void init_lib(BOOK* books, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d) 도서 이름 : ", i + 1);
		scanf_s("%s", books[i].title, 12);
		printf("   출판년도 : ");
		scanf_s("%d", &books[i].year);
	}
}

void prn_lib(BOOK* books, int size)
{
	printf("\n>> 도서 정보 목록 <<\n");
	printf("\n>> 순번 도서명	출판년도");
	printf("\n===============================\n");
	for (int i = 0; i < size; i++)
		printf("   %3d   %-12s%4d\n", i + 1, books[i].title, books[i].year);
	printf("===============================\n");
}