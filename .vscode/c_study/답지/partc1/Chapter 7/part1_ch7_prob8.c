#include <stdio.h>
int main()
{
	int i = 0, num = 1, sum = 0;

	while (num != 0) {
		printf("������ �Է��� �ּ��� : ");
		scanf("%d", &num);
		
		sum += num;
		i++;
	}
		
	printf("���� ��� : %d\n", sum);
	printf("�Է� Ƚ�� : %d\n", i-1); 

	return 0;
}

/*
	���� num�� �Է¹��� ���� �����մϴ�. while ���� �������� num�� 0�� �ƴ� ����
	�ݺ����� �����ϵ��� �ϸ� �Է��� 0�� ������ �� while ���� Ż���Ͽ�
	���� ����� �Է� Ƚ���� ����ϰ� �˴ϴ�. 
*/