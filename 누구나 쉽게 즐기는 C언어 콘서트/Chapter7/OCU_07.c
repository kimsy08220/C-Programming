#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)

// 주차 요금을 계산하여 반환하는 함수
int calc_price(int hour, int minute, char car)
{
	int price = 0, h_cnt = 0;	// 주차 요금을 계산하여 저장하는, 24시간을 기준으로 1씩 증가하는 정수형 변수

	if (hour < 4) {			// 4시간 미만일 경우
		minute += hour * 60;	// 시간을 분으로 변환
		// 10분 단위로 절상하여 계산하기 위해 minute에 9를 더함
		// ex) 12분 입력 시 2000(1000 * (12 + 9) / 10)원의 요금을 부과
		price += 1000 * ((minute + 9) / 10);
	}
	else if (hour < 24) {	// 24시간 이하일 경우
		price = 25000;		
	}	
	else {					// 24시간 이후일 경우
		h_cnt = hour / 24;	// 24시간 단위를 숫자로 환산하여 h_cnt에 저장
		price = 25000 * h_cnt;	// 24시간 마다 25000의 요금을 부과
		minute = (hour - (24 * h_cnt)) * 60;	// 입력한 hour에 앞서 요금 계산한 시간을 뺀 후 분으로 교환
		price += 1000 * ((minute + 9) / 10);	// price에 추가적으로 10분 단위를 절상하여 계산한 후 다시 저장
	}
	return price;	// 반환값
}

// 경차이면 요금을 50% 할인해주고 아니면 요금 그대로 반환하는 함수
int discount(char car, int price)
{
	if (car == 'Y') {	// 경차일 경우
		price = price * 0.5;	
		price = price - price % 1000;	// 백원 단위의 요금이 발생하면 1000으로 나눈 나머지를 절하한 요금을 저장
	}
	return price;	// 반환값
}

// 메인 함수(프로그램 시작)
int main(void) {
	int hour, minute;	// 주차 시간과 분을 입력받아 저장하는 정수형 변수
	int price = 0;		// 주차 요금을 계산하여 저장하는 정수형 변수
	char car;			// 차종이 경차인지(Y) 아닌지 판별하는 문자형 변수

	printf("--------------------------------------------------------------------\n");
	printf("		   주차장의 주차요금 계산 프로그램\n");
	printf("--------------------------------------------------------------------\n");
	printf("주차시간을 시간과 분으로, 차종(경차 여부:경차이면 Y) 입력 : ");
	scanf_s("%d %d %c", &hour, &minute, &car, sizeof(car));
	
	price = calc_price(hour, minute, car);	// 주차 요금을 계산하는 함수를 호출하여 반환값을 price에 저장
	printf("요금 합계 : %d\n", price);

	price = discount(car, price);	// 경차 여부를 확인 후 할인하는 함수를 호출하여 반환값을 price에 저장
	printf("--------------------------------------------------------------------\n");
	printf("최종 요금 : %d\n", price);
	printf("--------------------------------------------------------------------\n");
}

