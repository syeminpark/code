#include <stdio.h>
int main()
{
	int num, i, result = 1;
	
	printf("���丮�� ������ ���ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
		result *= i;
	
	printf("%d�� ���丮�� ���� ����� %d�Դϴ�. \n", num, result);

	return 0;
}

/*
	å�� ���õ� ��Ʈ�� 9, 10��° �ٰ� ���� �����ϸ� �˴ϴ�.
*/