#include <stdio.h>

int main() {
	int a, b, c;
	int result;
	int result1;
	int result2;

	printf("input a : ");
	scanf("%d", &a);
	printf("input b : ");
	scanf("%d", &b);
	printf("input c : ");
	scanf("%d", &c);

	result1 = (a > b) ? a : b;
	result2 = (a > c) ? a : c;
	result = (result1 > result2) ? result1 : result2 ;

	printf("Result : %d \n", result);

	return 0;
}

/*

���� �������� ?�� ���� if���� ������� �ʰ� �����ϰ� Ư������ ���õǵ��� �մϴ�.
a b c �� ���ϱ� ���� a�� b, a�� c�� ���� �� �� ����� �ٽ� ���Ͽ� ����մϴ�.

*/