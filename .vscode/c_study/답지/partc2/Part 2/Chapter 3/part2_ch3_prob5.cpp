#include <stdio.h>

int main () {

	// 1 �ܰ�
	int array[3] = {10, 20, 30};
	int *ip = NULL, **ipp = NULL, i;

	// 2 �ܰ�
	ip = array;		// �迭�� �̸��� �ּ� ���̹Ƿ� & ��ȣ�� �ʿ� ����. 
	ipp = &ip;

	for (i = 0; i < 3; i++) 
		printf("ipp 2���� �����ͷ� ������ �迭 array�� %d ��° ���� %d �Դϴ�. \n", i, *(*ipp+i));
	
	return 0;
}