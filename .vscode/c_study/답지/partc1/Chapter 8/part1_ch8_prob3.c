#include <stdio.h>
int main(void)
{
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	num  = num/10;

	switch (num) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	default:
		printf("F\n");
		break;
	}

	return 0;
}

/*
	�Է¹��� ���� �׻� 100 ���� �̹Ƿ� �̸� 10���� ������ 10 ������ ���� �˴ϴ�. 
	�Է¹��� ���� 10���� ������ 10, 9 (�� �Է¹��� ���� 90~100 �� ���) ��� A��
	8 (�� �Է¹��� ���� 80~89 �� ���) ��� B�� 
	������ ��쿡�� F�� ����ϸ� �˴ϴ�. 
*/