#include <stdio.h>

int main(void)
{
	char grade;

	printf("학점을 입력하시오 : ");
	grade = getchar();

	switch (grade)
	{
	case 'A': printf("아주 잘했어요!\n");
		break;
	case 'B': printf("좋습니다.\n");
		break;
	case 'C': printf("만족스럽습니다.\n");
		break;
	case 'D': printf("더 노력해보세요.\n");
		break;
	case 'F': printf("안타깝습니다.\n");
		break;
	default: printf("A,B,C,D,F 중 입력해주세요.\n");
		break;
	}

	return 0;
}