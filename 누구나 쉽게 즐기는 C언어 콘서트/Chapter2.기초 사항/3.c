#include <stdio.h>

int main(void)
{
	int price, num;

	printf("상품 가격을 입력하시오 : ");
	scanf_s("%d", &price);
	printf("상품의 개수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("총 가격은 %d입니다.\n", price * num);

	return 0;
}