#include <stdio.h>		// ǥ�� ����� �Լ��� ����� ��������� ���Խ��� ��� (printf, scanf_s ��)
#include <string.h>		// ���ڿ��� �ٷ� �� �ִ� ��������� ���Խ��� ��� (strcpy, strlen ��)

// �Է� ���ڿ��� ������ ���ڸ� �Է¹޴� �Լ�
char input_message(char* message, char delete_message)
{
	printf("�Է� ���ڿ� : ");
	gets_s(message, 100);

	printf("�Է� ���ڿ����� ������ ���� : ");
	delete_message = getchar();

	return delete_message;
}

// �Է� ���ڿ����� ������ ���ڸ� �����ϴ� �Լ�
void delete_char(char* message, char delete_message)
{
	for (char* c = message; *message != NULL; message++) {	// NULL ���ڰ� �ƴ� ��� ��� �ݺ�, �� NULL ���ڸ� ���� ������ �ݺ�
		if (*message == delete_message) {	// �Է� ���ڿ� �� ������ ���ڿ� ���� ���
			strcpy_s(message, strlen(message) + 1, message + 1);	// ���ڿ��� ��ġ�� ���� ���� ���ڿ��� ����
			message--;		// �ǳʶٴ� ���� �����ϱ� ���� ���� ���·� �ǵ����� ����
		}
	}
}

// ���� �Լ�(���α׷� ����)
int main(void)
{
	char message[100];			// �Է� ���ڿ��� �����ϴ� ������ �迭
	char delete_message = ' ';	// ������ ���ڸ� �����ϴ� ������ ����
	
	delete_message = input_message(message, delete_message);	// �Է� ���ڿ��� ������ ���ڸ� �Է¹޴� �Լ� ȣ��
	delete_char(message, delete_message);	// �Է� ���ڿ����� ������ ���ڸ� �����ϴ� �Լ� ȣ��
	
	printf("��� ���ڿ� : %s\n", message);
	return 0;
}



