#include <stdio.h>
int abs(int x);

int main(void) {
	int a;
	int result=0;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	result = abs(a);
	printf("���밪�� : %d�Դϴ�. \n", result);

	return 0;
}

int abs(int x) {
	if(x >= 0)
		return x;
	else
		return -x;
}

/*

���밪�� ��ȯ�ϴ� �Լ��� �����ϴ� �����Դϴ�.
�Է°��� 0���� ������ -�� �ٿ� ����� ��ȯ��ŵ�ϴ�.

*/