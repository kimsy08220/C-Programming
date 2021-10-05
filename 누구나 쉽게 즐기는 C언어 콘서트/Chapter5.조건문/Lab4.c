#include <stdio.h>

int main(void)
{
	int math, phy, chem;

	printf("수학, 물리, 화학 점수를 한줄에 입력하시오 : ");
	scanf_s("%d%d%d", &math, &phy, &chem);

	if (math >= 50 && phy >= 50 && chem >= 50)
	{
		if (math + phy >= 150 || math + chem >= 150)
			printf("가입할 수 있습니다.\n");
		else
			printf("가입할 수 없습니다.\n");
	}
	else
		printf("가입할 수 없습니다.\n");

	return 0;
}