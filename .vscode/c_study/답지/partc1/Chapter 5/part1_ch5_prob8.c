#include <stdio.h>

int main() {
	int h, m, s;
	int result;

	printf("��, ��, �ʸ� ���ʷ� �Է� : ");
	scanf("%d %d %d", &h, &m, &s);

	result = h * 60 * 60 + m * 60 + s;

	printf("%d �� \n", result);

	return 0;
}

/*

�� �� �ʸ� �Է� �޾� �̸� ������ �°� ��� ����Ͽ� ����մϴ�.
������ �켱������ ����ǹǷ� ��ȣ ���� ���� Ǯ� ����մϴ�.

*/