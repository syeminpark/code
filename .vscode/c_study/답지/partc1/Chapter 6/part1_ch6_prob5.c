#include <stdio.h>
int main()
{
	double result;
	double input1;
	double input2;

	printf("input 2 numbers = ");
	scanf("%lf %lf", &input1, &input2);

	result = input1/input2;
	printf("������ ��� = %lf \n", result);

	return 0;
}

/*
	����ڰ� �Է��ϴ� �Ǽ����� ���� �� �־�� �ϰ� 
	(���� ���� �������̶� �ϴ���) �Ǽ����� ������� �ٷ� �� �־�� �ϱ� ������
	�������� double ������ �����ؾ� �մϴ�. 
*/