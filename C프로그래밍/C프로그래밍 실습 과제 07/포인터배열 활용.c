#include <stdio.h>

int main(void)
{
	int num;
	char* arr[3] = {"asdf", "qwer", "dfgh"};

	/*for (int i = 0; i < 3; i++)
		*arr[i] = getchar();*/
	
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	switch (num) {
	case 1: printf("%s\n", *(arr + 0));
		break;
	case 2: printf("%s\n", *(arr + 1));
		break;
	case 3: printf("%s\n", *(arr + 2));
		break;
	default: printf("1~3중에 골라주세요.\n");
	}
	
	return 0;
}