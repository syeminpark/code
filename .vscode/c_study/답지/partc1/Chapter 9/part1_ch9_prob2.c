#include <stdio.h>
int sum(int x);

int main(void) {
	int i;

	for(i=1; i<=12; i++)
	{
		printf("%d ", sum(i));
	}

	printf("\n");
}

int sum(int x) {
	if (x <= 2)
		return 1;
	else
		return sum(x-1) + sum(x-2);
}

/*

�䳢�� ��ü�� ������ ���ϴ� �����Դϴ�.
��� �Լ� ȣ���� ���� ������ �ذ��մϴ�.

*/