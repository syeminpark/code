#include <stdio.h>
int sum(int x);

int main(void) {
	int a;
	int result;

	printf("input your number = ");/
	scanf("%d", &a);
	result = sum(a);
	printf("1���� %d������ �� : %d \n", a, result);

	return 0;
}

int sum(int x) {
	if(x <= 1)
		return 1;
	else 
		return x + sum(x-1);
}

/*

����Լ��� �̿��Ͽ� 1���� �Է°������� ���� ���ϵ��� �Ͽ����ϴ�.
1���� �۰� �Ǹ� ��� ȣ���� ���߾���ϱ� ������ �̶��� 1�� �����մϴ�.

*/