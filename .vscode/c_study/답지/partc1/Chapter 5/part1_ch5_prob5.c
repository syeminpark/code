#include <stdio.h>

int main() {
	double exchange_rate = 1095.3;
	int dollar=0;

	printf("ȯ���� �ݾ��� �Է����ּ���. : ");
	scanf("%d", &dollar);
	printf("ȯ���� �ݾ� : %.2lf ��\n", dollar * exchange_rate);

	return 0;
}

/*

������ ȯ���� double�� ������ �����ϰ�
�Է¹��� �ݾ��� ȯ�� �ݾ����� ����ϴ� ������ ���α׷��Դϴ�.

*/