#include <stdio.h>
int Add(int x, int y);
int Count();

int main(void) {
	int a, b, c;
	int result;
	
	c = 0;

	while(c < 100)
	{
		printf("���� �� ���� �Է��ϼ���(0 0 -> exit) : ");
		scanf("%d %d", &a, &b);
			
		if(a == 0 && b == 0) {
			break;
		}
		else {
			result = Add(a, b);
			printf("���� ��� : %d \n", result);
		}

		c = Count();
	}		
	
	printf("�� ���� �� : %d \n", c);
	return 0;
}

int Add(int x, int y) {
	return x + y;
}

int Count() {
	static int c = 0;
	c++;

	return c;
}

/*

���� ������ c�� ��� �� ������ �� �� �ߴ��� Ȯ���ϴ� �� �̿��մϴ�.
Count()�Լ��� ���� ���� c���� ������Ű�� �� �̿�Ǹ� c�� ��ȯ�մϴ�.
Count()�Լ������� c�� ���� �����̱� ������ Count()�� ��� ȣ��ǵ� ���� ���� �����մϴ�.

*/