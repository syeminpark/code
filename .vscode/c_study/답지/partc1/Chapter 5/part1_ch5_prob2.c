#include <stdio.h>

int main() {
	int a, b;
	int result;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);

	(a==b) ? printf("���� \n") : (a>b) ? printf("Smaller Number : %d \n", b) : printf("Smaller Number : %d \n", a);

	return 0;
}

/*

���� �����ڸ� �̿��Ͽ� ������ �ذ��մϴ�.
if-else�� �̿��ϸ� �������� ��������,
�����ڿ� ���� �ٷ�� �ܿ��� ���������̹Ƿ� ���� �����ڸ� ���� �̿��Ͽ� ������ �̿��մϴ�.

*/