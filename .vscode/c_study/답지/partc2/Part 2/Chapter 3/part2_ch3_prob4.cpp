#include <stdio.h>

int main () {

	// 1�ܰ�
	int num1 = 10;
	int *ip1 = NULL, **ip2 = NULL, ***ip3 = NULL;
	printf("num1 ���� ���� %d�Դϴ�. \n", num1);

	// 2 �ܰ�
	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	*ip1 += 10;
	printf("num1 ���� ���� %d�Դϴ�. \n", num1);

	// 3 �ܰ�
	**ip2 += 10;
	printf("num1 ���� ���� %d�Դϴ�. \n", num1);
	
	// 4 �ܰ�
	***ip3 += 10;
	printf("num1 ���� ���� %d�Դϴ�. \n", num1);
	
	return 0;
}