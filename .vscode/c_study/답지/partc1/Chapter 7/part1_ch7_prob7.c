#include <stdio.h>
int main()
{
	int i, score;
	double sum = 0;
	
	printf("�� ������ ������ ��� ����մϴ�. \n");
	
	for (i = 0; i < 10; i++)
	{
		printf("������ �Է��� �ּ��� : ");
		scanf("%d", &score);
		sum += score;
	}
	
	printf("�� ���� ������ ����� %.1lf���Դϴ�. \n", sum/10);

	return 0;
}

/*
	�ݺ����� 10�� �ݺ��Ǹ鼭 ������ �Է¹ް� 
	�Է¹��� ������ sum ������ ������ ��
	10���� ������ ����ϸ� �˴ϴ�. 
*/