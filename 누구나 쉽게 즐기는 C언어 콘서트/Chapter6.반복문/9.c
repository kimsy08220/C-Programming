#include <stdio.h>
// ???

int main(void)
{
	int cnt = 0;
	char c;

	while (1) {
		printf("���ڸ� �Է��Ͻÿ� : (���� .)");
		scanf_s(" %c", &c, sizeof(c));	// Enter : �ƽ�Ű�ڵ� 10�̹Ƿ� Enter�� �Է����� �޴� ��
		// �Ϲ����� '%c'�� ȭ��Ʈ �����̽�(white space)���� ��� ���ڷ� �ν������� ȭ��Ʈ �����̽�(white space)�� ������ ���ڸ� �ν� ���������� '%c'�տ� ȭ��Ʈ �����̽�(white space)�� �Է��Ѵ�

		//c = getchar();

		if (c == 'a')
			cnt++;
		if (c == '.') {
			printf("a�� ���� = %d\n", cnt);
			break;
		}
	}
	return 0;
}