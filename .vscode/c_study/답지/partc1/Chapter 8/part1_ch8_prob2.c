#include <stdio.h>
int main(void)
{
	int num, divider = 100, temp;
	
	printf("3�ڸ� �������� �Է��ϼ��� : ");
	scanf("%d", &num);

	while (divider > 0) {
		
		temp = num / divider % 10;
		
		if ( temp % 2)
			printf("%d : Ȧ�� ", temp);
		else
			printf("%d : ¦�� ", temp);

		divider /= 10;
	}
	
	printf("\n");

	return 0;
}

/*
	���� divider �� ���� ���� �ִ� �ڸ����� ��� ���� �Է¹��� ���� �������ִ� ���Դϴ�.
	(ex. ���� �ڸ� ���� ��� ���ؼ��� 100���� ������� �Ѵ�.)
	���� temp �� ���� ���� �ִ� �ڸ���(0~9) �Դϴ�.
	divider�� 100���� 10, 1, 0���� 10�� ������ �����鼭 ���� �ڸ������� ���� �ڸ������� Ȯ���ϰ�
	divider�� 0�� �Ǹ� while���� Ż���Ͽ� �����մϴ�. 
*/