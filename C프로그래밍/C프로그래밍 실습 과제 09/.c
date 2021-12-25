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
		printf("������ �Է��� ���� �Ǽ� : ");
		scanf_s("%d", &size);
		if (size <= 0)
			printf("���� : �Ǽ��� �߸� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���\n");
	} while (size <= 0);

	books = (BOOK*)malloc(sizeof(BOOK) * size);
	if (books == NULL) {
		puts("���� ������ �Ҵ翡 �����Ͽ����ϴ�.\n");
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
		printf("%d) ���� �̸� : ", i + 1);
		scanf_s("%s", books[i].title, 12);
		printf("   ���ǳ⵵ : ");
		scanf_s("%d", &books[i].year);
	}
}

void prn_lib(BOOK* books, int size)
{
	printf("\n>> ���� ���� ��� <<\n");
	printf("\n>> ���� ������	���ǳ⵵");
	printf("\n===============================\n");
	for (int i = 0; i < size; i++)
		printf("   %3d   %-12s%4d\n", i + 1, books[i].title, books[i].year);
	printf("===============================\n");
}