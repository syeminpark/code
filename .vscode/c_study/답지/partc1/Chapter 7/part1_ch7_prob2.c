#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}

/*
	i�� ��µ� *�� �� ��ȣ��
	j�� �� �ٿ��� ��µǴ� *�� ���� �����մϴ�.
*/