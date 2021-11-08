#include <stdio.h>		// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf. scanf_s 등)

int main(void)
{
	int code_num, usage;		// 각각 통신망 코드 번호, 사용량(MB)을 저장하는 정수형 변수
	int basic = 0, price = 0, tax = 0, total = 0;	// 각각 기본료, 사용료, 세금, 요금합계를 저장하는 정수형 변수

	printf("---------------------------------------------------------------------------\n");
	printf("			  핸드폰 요금 계산 프로그램\n");
	printf("---------------------------------------------------------------------------\n");
	printf("통신망 코드 번호(LTE = 1, 5G = 2) : ");
	scanf_s("%d", &code_num);	
		
	if (code_num == 1 || code_num == 2)	// 통신망 코드 번호가 1(LTE) 또는 2(5G)일 경우
	{
		// 1과 2를 입력하였을 때만 사용량(MB)을 입력 가능
		printf("사용량(MB) : ");	
		scanf_s("%d", &usage);		

		printf("---------------------------------------------------------------------------\n");
		if (code_num == 1)	// 통신망 코드 번호가 1(LTE)일 경우
		{
			basic = 2000;
			printf("기본료(LTE) = %d원\n", basic);
			printf("사용료(%.4lfGB = %dMB) = ", usage / 1000.0, usage);	// MB를 GB로 바꿔서 출력하기 위해 입력했던 usage(사용량)를 1000.0으로 나눔

			// 각각 영역별로 사용료 계산
			// += : 변수에 계속 더하기 위함
			if (usage >= 0 && usage <= 1000)	// usage(사용량)이 0과 1000 이하일 경우
			{
				price += usage * 15;	// 0~1MB 구간의 사용료 계산
				printf("%d(MB)*15(1MB~1GB 사이의 MB당 요금)", usage);
			}
			else if (usage >= 1001 && usage <= 5000)	// usage(사용량)이 1001과 5000 이하일 경우
			{
				price += 1000 * 15;		// 1MB~1GB g구간의 사용료 계산
				printf("1000(MB)*15(1MB~1GB 사이의 MB당 요금)");

				price += (usage - 1000) * 10;	// 1MB~1GB 구간의 사용료는 이미 계산했으니 원래 usage(사용량)에서 1000을 뺌
				printf("\n			  + (%d-1000)(MB)*10(1.001GB~5GB 사이의 MB당 요금)", usage);
			}
			else if (usage >= 5001)		// usage(사용량)이 5001 이상일 경우
			{
				price += 1000 * 15;		// 1MB~1GB 구간의 사용료 계산
				printf("1000(MB)*15(1M~1GB 사이의 MB당 요금)");

				price += (5000 - 1000) * 10;	// 1.001GB~5GB 구간의 사용료 계산
				printf("\n			  + (5000-1000)(MB)*10(1.001GB~5GB 사이의 MB당 요금)");

				price += (usage - 5000) * 5;	// 1MB~5GB 구간의 사용료는 계산했으니 원래 usage(사용량)에서 5000을 뺌
				printf("\n			  + (%d-5000)(MB)*5(5.001GB~ 사이의 MB당 요금)", usage);
			}
			printf("\n			  = %d원\n", price);	// 최종 price 출력
		}
		else if (code_num == 2)	// 통신망 코드 번호가 2(5G)일 경우
		{
			basic = 5000;
			printf("기본료(LTE) = %d원\n", basic);
			printf("사용료(%.4lfGB = %dMB) = ", usage / 1000.0, usage);	// MB를 GB로 바꿔서 출력하기 위해 입력했던 usage(사용량)를 1000.0으로 나눔

			// 각각 영역별로 사용료 계산
			if (usage >= 0 && usage <= 10000)	// usage(사용량)이 0과 10000 이하일 경우
			{
				price += usage * 20;	// 1MB~10GB 구간의 사용료 계산
				printf("%d(MB)*20(1M~10GB 사이의 MB당 요금)", usage);
			}
			else if (usage >= 10001)	// usage(사용량)이 10001 이상일 경우
			{
				price += 10000 * 20;	// 1MB~10GB 구간의 사용료 계산
				printf("10000(MB)*20(1M~10GB 사이의 MB당 요금)");

				price += (usage - 10000) * 10;	// 1MB~10GB 구간의 사용료는 계산했으니 원래 usage(사용량)에서 10000을 뺌
				printf("\n			  + (%d-10000)(MB)*10(10.001GB~ 사이의 MB당 요금)", usage);
			}
			printf("\n			  = %d원\n", price);	// 최종 price 출력
		}

		tax = (basic + price) * 0.1;	
		printf("세금 = %d(= %d + %d) * 0.1(세율) = %d원\n", basic + price, basic, price, tax);
		total = (basic + price) + tax;
		printf("요금합계 = %d + %d = %d원\n", basic + price, tax, total);
		printf("---------------------------------------------------------------------------\n");
	}
	else    // 통신망 코드 번호, 1(LTE) 또는 2(5G)가 아닌 경우
		printf("1과 2 중 선택하여 입력해주시기 바랍니다.\n");

	return 0;	// 정상종료
}



