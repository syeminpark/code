#include <stdio.h>

int main () {

	// 1�ܰ�
	int num1 = 10;
	int *ip1 = NULL, **ip2 = NULL, ***ip3 = NULL;

	// 2 �ܰ�
	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("ip3 ������ �����͸� ����� num1 ������ ������ ���� %d�Դϴ�. \n", ***ip3);
	
	return 0;
}