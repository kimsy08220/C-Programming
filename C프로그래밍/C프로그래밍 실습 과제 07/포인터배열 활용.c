#include <stdio.h>

int main(void)
{
	int num;
	char* arr[3] = {"asdf", "qwer", "dfgh"};

	/*for (int i = 0; i < 3; i++)
		*arr[i] = getchar();*/
	
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	switch (num) {
	case 1: printf("%s\n", *(arr + 0));
		break;
	case 2: printf("%s\n", *(arr + 1));
		break;
	case 3: printf("%s\n", *(arr + 2));
		break;
	default: printf("1~3�߿� ����ּ���.\n");
	}
	
	return 0;
}