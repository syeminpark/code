#include <stdio.h>
int main()
{
	int operand1, operand2;
	
	while(1)
	{
		printf("ù ��° ���� �Է��� �ּ��� : ");
		scanf("%d", &operand1);
		printf("�� ��° ���� �Է��� �ּ��� : ");
		scanf("%d", &operand2);

		printf("%d + %d = %d�Դϴ�. \n", operand1, operand2, operand1 + operand2);
	}
	return 0;
}

/*
	operand1, 2 �� �Է¹ް� ���� ����� ������ִ� �ڵ尡 ���� ���� ���� �ۼ��Ǹ� �˴ϴ�. 
*/