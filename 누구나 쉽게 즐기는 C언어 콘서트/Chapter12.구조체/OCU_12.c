#include <stdio.h>	// 표준 입출력 함수가 선언된 헤더파일을 포함시켜 사용 (printf, scanf_s 등)
#include <stdlib.h>	// 문자열 변환, 난수 생성 등의 함수가 선언된 헤더파일을 포함시켜 사용(srand, rand 등)
#include <math.h>	// 여러 수학 함수들이 선언된 헤더파일을 포함시켜 사용 (abs, sqrt 등)
#include <time.h>	// 날짜와 시간 조작 함수가 선언된 헤더파일을 포함시켜 사용 (time 등)

struct point {
	int x, y; 	// 2차원에서 한 점(point)
};

struct triangle {
	struct point point1;	// 꼭지점 1
	struct point point2;	// 꼭지점 2
	struct point point3;	// 꼭지점 3
};

// 삼각형이 성립되는 여부를 확인하여 정수를 반환하는 함수
int condition(struct triangle *t1)
{
	// 삼각형이 성립 X : x 또는 y 좌표가 모두 같을 경우, x, y 좌표가 두 점 이상 같을 경우
	if ((t1->point1.x == t1->point2.x && t1->point2.x == t1->point3.x) || (t1->point1.y == t1->point2.y && t1->point2.y == t1->point3.y) ||	(t1->point1.x == t1->point2.x && t1->point1.y == t1->point2.y) || 
		(t1->point1.x == t1->point3.x && t1->point1.y == t1->point3.y) || (t1->point2.x == t1->point3.x && t1->point2.y == t1->point3.y) || ((t1->point1.x - t1->point1.y) == (t1->point2.x - t1->point2.y) && 
			(t1->point2.x - t1->point2.y) == (t1->point3.x - t1->point3.y))) 
		return 0;
	else 
		return 1;
}

// 삼각형의 넓이를 반환하는 함수
double getArea(struct triangle* t1, double area)
{
	// 세 점의 좌표를 알 경우 사선 공식(신발끈 공식)을 이용해 넓이를 구함
	area = (1 / 2.0) * abs((t1->point1.x * t1->point2.y + t1->point2.x * t1->point3.y + t1->point3.x * t1->point1.y) - (t1->point2.x * t1->point1.y + t1->point3.x * t1->point2.y + t1->point1.x * t1->point3.y));
	return area;
}

int main(void)
{
	int cnt = 1;		// 계산불가인 횟수를 저장하는 정수형 변수
	double area = 0;	// 삼각형의 넓이를 저장하는 실수형 변수
	srand(time(NULL));	// 난수 생성
	printf("------------------------------------------------------\n");
	printf("      삼각형이 성립되는 여부를 확인하는 프로그램\n");
	printf("------------------------------------------------------\n");

	do {
		struct triangle t1 = { rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };	// triangle 구조체를 선언과 동시에 1~10 사이의 정수값으로 초기화

		if (condition(&t1)) {	// 삼각형이 성립되는 여부를 확인하여 정수를 반환하는 함수를 호출
			area = getArea(&t1, area);	// 삼각형의 넓이를 반환하는 함수를 호출하여 area에 저장
			printf("점1 (%d, %d)좌표, 점2 (%d, %d)좌표, 점3 (%d, %d)좌표, %.2lf\n", t1.point1.x, t1.point1.y, t1.point2.x, t1.point2.y, t1.point3.x, t1.point3.y, area);
			printf("------------------------------------------------------\n");
			break;
		}
		else {
			printf("			계산불가\n");
			printf("점1 (%d, %d)좌표, 점2 (%d, %d)좌표, 점3 (%d, %d)좌표\n", t1.point1.x, t1.point1.y, t1.point2.x, t1.point2.y, t1.point3.x, t1.point3.y);
			cnt++;
			srand(time(NULL) * cnt);		// cnt를 곱해주는 이유 : 여러 번 출력되지 않기 위함(컴퓨터의 속도가 빨라 같은 시간에 반복문이 돌기 때문에 똑같은 수가 생성)
			printf("------------------------------------------------------\n");
		}
	} while (1);

	return 0;
}



