// ��Ʈ2 3�� 6�� ����

#include <stdio.h>

// �Լ��� �Լ� �������� ����ο���
// �Է°��� Ÿ�� �κ���
// int *p  �� int p[] ��� �����մϴ�. 
// �ش� �κ��� �ּ��� �ٲپ�� Ȯ���غ�����.


// �Լ��� �����
//void arrInput (int p[], int length);
void arrInput (int *p, int length);

int main () {
	int array[5] = {10, 20, 30, 40, 50};
	
	// �Լ� �������� �����
	//int (*pfunc) (int [], int);
	int (*pfunc) (int *, int);

	pfunc = arrInput;
	pfunc(array, 5);

	return 0;
}

//void arrInput (int p[], int length) {
void arrInput (int *p, int length) {
	int i = 0;

	for (i; i<length; i++) 
		printf("%d ", p[i]);

	printf("\n");
}