#include <stdio.h>

int main(){
	int i1, i2, sum, sub;
	
	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d%d", &i1, &i2);

	sum = i1 + i2;
	sub = i1 - i2;
	printf("�� : %d + %d = %d\n", i1, i2, sum);
	printf("�� : %d - %d = %d\n", i1, i2, sub);

	return 0;
}

/* �ؼ�
	printf()�� scanf()�� ���Ĺ��ڸ� ����Ͽ� �˸��� ���·� ����ϴ� �����Դϴ�.
	���Ĺ��ڿ� ���� ǥ�� ���¿� ������ �˾ƾ� �մϴ�.
	*/