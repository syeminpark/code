#include <stdio.h>
int main()
{
	double r, area, length;
	
	printf("���� ������: ");
	scanf("%lf", &r);

	area = 3.14*r*r;
	length = 2*3.14*r;

	printf("���� ����: %.2lf\n���� �ѷ�: %.2lf \n", area, length);

	return 0;
}

/*
	å������ ��Ʈ��� 9, 10��° ���� �����ϸ� �˴ϴ�. 
*/