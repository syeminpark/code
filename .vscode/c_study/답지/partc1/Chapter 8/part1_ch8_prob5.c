#include <stdio.h>
int main(void)
{
	int a, b, c;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	printf("input : ");
	scanf("%d", &c);

	if(a>=b)
		if(a>=c)
			printf("result : %d\n", a);
		else
			printf("result : %d\n", c);
	else
		if(b>=c)
			printf("result : %d\n", b);
		else
			printf("result : %d\n", c);
	
	return 0;
}

/*
	�� �� �� ���� ū ���� ��� ���ؼ��� �ּ� �ι��� �񱳰� �ʿ��մϴ�. 
	��, ���� ���� �Է¹��� ��쵵 ó���Ǿ�� �ϱ� ������
	�� ������ �� >=, <= �� ����ϸ� �˴ϴ�. 
*/