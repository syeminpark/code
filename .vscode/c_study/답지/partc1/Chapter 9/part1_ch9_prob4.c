#include <stdio.h>
int getArea(int x, int y);

int main(void) {
	int a, b;
	int result;

	printf("�غ� ���� : ");
	scanf("%d", &a);
	printf("���� : ");
	scanf("%d", &b);

	result = getArea(a, b);
	printf("�簢���� ���̴� %d�Դϴ�. \n", result);
	
	return 0;
}

int getArea(int x, int y) {
	return x * y;
}

/*

scanf�� �̿��Ͽ� ���� �Է¹ް� getArea��� �Լ��� ���� ���� ��ȯ�ϴ� ������ �����Դϴ�.

*/