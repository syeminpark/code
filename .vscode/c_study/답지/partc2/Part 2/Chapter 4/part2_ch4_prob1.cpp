// ��Ʈ2 4�� 1������
#include <stdio.h>

int main () {

	int array[5] = {10, 30, 40, 30, 20};
	int *p = NULL;
	int i, sum;

	p = array;

	for (i = 0, sum = 0; i < 5; i++) 
		sum += *(p + i);

	printf("�迭�� �� ���� %d �Դϴ�.\n", sum);

	return 0;
}