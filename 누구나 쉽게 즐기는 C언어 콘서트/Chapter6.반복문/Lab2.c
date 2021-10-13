#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;

	while (1) {
		system("cls");		// 화면을 지운다.
		printf("%02d : %02d : %02d\n", hour, min, sec);
		sec++;
		if (sec == 60) {
			min++;
			sec = 0;
		}
		if (min == 60) {
			hour++;
			min = 0;
		}
		if (hour == 24) {
			hour = min = sec = 0;
		}
		Sleep(1000);
	}
}