#include  <stdio.h>
int main(void)
{
	int i, j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		
		for (; j < 7 - i; j++)
			printf("*");
		
		printf("\n");
	}

	return 0;
}

/*
	i�� �ٹ�ȣ�� ��Ÿ����, j�� �� �ٿ����� �� ���ڸ� ��Ÿ���ϴ�.
	�� �ٿ��� ó�� i ��° ���ڱ����� �������� ����ϰ�
	�� �ں��� 7 - i ��° ���ڱ��� *�� ����ϸ� �˴ϴ�. 
*/