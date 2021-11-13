#include <stdio.h>     // ǥ�� ����� �Լ��� ����� ��������� ���Խ��� ��� (printf, scanf_s ��)
#include <stdlib.h>    // ���ڿ� ��ȯ, ���� ���� ���� �Լ��� ����� ��������� ���Խ��� ��� (srand, rand ��)
#include <time.h>     // ��¥�� �ð� ���� �Լ��� ����� ��������� ���Խ��� ��� (time ��)

// eng_score ������(�迭)�� rand �Լ���, eng_rank ������(�迭)�� 1�� �ʱ�ȭ�ϴ� �Լ�
void eng_rand(int* eng_score, int* eng_rank)
{
	srand(time(NULL));	// �׻� �ٸ� ������ �����ϱ� ���� �Լ��� ����
	for (int i = 0; i < 100; i++) {
		*(eng_score + i) = rand() % 101;	// rand() % 101 : 0 ~ 100������ ����, eng_score ������(�迭)�� 0~100������ ������ ����
		*(eng_rank + i) = 1;		// eng_rank ������(�迭)�� ������ 1 ����
		if (i % 10 == 0)
			printf("\n");
		printf("%3d ", *(eng_score + i));	
	}
}

// ������������ �����ϴ� �Լ�
void sort(int* eng_score)
{
	int temp = 0;	// ������ ���� �����ϱ� ���� ������ ����
	for (int i = 0; i < 100; i++) {
		for (int j = i; j < 100; j++) {
			if (*(eng_score + i) < *(eng_score + j)) {	// ���� �ڸ��� �ٲ����ν� ������������ ����
				temp = *(eng_score + i);
				*(eng_score + i) = *(eng_score + j);
				*(eng_score + j) = temp;
			}
		}
	}
}

// ���� ����� ��� ó�����ִ� �Լ�
void same_rank(int* eng_score, int* eng_rank)
{
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
			if (*(eng_score + i) < *(eng_score + j))
				(*(eng_rank + i))++;	
	}
}

// ���� ������ �����ִ� �Լ�
void test_result(int* eng_score, int* eng_rank)
{
	// �������� �л����� ������ �ο�
	for (int i = 0; i < 100; i++) {
		if (i % 10 == 0)
			printf("\n");

		if (eng_rank[i] <= 30)
			printf("[%3d,%3d, A] ", *(eng_rank + i), *(eng_score + i));
		else if (eng_rank[i] <= 50)
			printf("[%3d,%3d, B] ", *(eng_rank + i), *(eng_score + i));
		else if (eng_rank[i] <= 70)
			printf("[%3d,%3d, C] ", *(eng_rank + i), *(eng_score + i));
		else if (eng_rank[i] <= 90)
			printf("[%3d,%3d, D] ", *(eng_rank + i), *(eng_score + i));
		else
			printf("[%3d,%3d, F] ", *(eng_rank + i), *(eng_score + i));
		if (i == 99)
			printf("\n\n");
	}
}

// ���� �Լ�(���α׷� ����)
int main(void)
{
	int eng_score[100] = { 0 };	// ���� ���� ������ �����ϴ� ������ �迭
	int eng_rank[100] = { 0 };	// ���� ���� ������ �����ϴ� ������ �迭

	eng_rand(eng_score, eng_rank);		// ������ ������ �ʱ�ȭ�ϴ� �Լ� ȣ��
	sort(eng_score);			// ������ ������������ �����ϴ� �Լ� ȣ��
	same_rank(eng_score, eng_rank);		// ���� ����� ó���ϴ� �Լ� ȣ��

	printf("\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("						    ���� ���� ���� ���α׷�\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	test_result(eng_score, eng_rank);		// ���� ������ �����ִ� �Լ� ȣ��
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

	return 0;
}


