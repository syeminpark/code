#include <stdio.h>
int main(void)
{
	int num1 = 0, num2 = 0;
	
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("ū ���� %d�Դϴ�. \n", num1);
	else if (num1 < num2)
		printf("ū ���� %d�Դϴ�. \n", num2);
	else
		printf("�� ���� �����ϴ�. \n");
	
	return 0;
}

/*
	���ǹ��� ����Ͽ� �� ���� ����� ��� ����� �޸� �մϴ�.
*/