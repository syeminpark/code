#include <stdio.h>

int main () {
	int arr[15] = {90, 78, 77, 98, 98,
		           80, 45, 67, 88, 57,
				   88, 99, 65, 55, 74};

	int horizonSum[3] = {0};
	int verticalSum[5] = {0};
	int totalSum = 0;
	int i;

	for (i = 0; i < 15; i++) {
		horizonSum[i/5] += arr[i];
		verticalSum[i%5] += arr[i];
		totalSum += arr[i];
	}
	
	printf("�������� ���� ���� ");
	for (i = 0; i < 3; i++) 
		printf("%d ", horizonSum[i]);
	printf("�̸�, \n�������� ���� ���� ");
	for (i = 0; i < 5; i++)
		printf("%d ", verticalSum[i]);
	printf("�̸�, \n�� ���� %d �Դϴ�.\n", totalSum);

	return 0;
}

/*
	�迭�� ���̺��� ���� ���η� �о���� 1���� �迭�� ������� ���� �����մϴ�.
	�������� ��� �迭 �ε����� 5�� ���� ���� ����ϸ� 0, 1, 2 ��° ���� ���� ����� �� �ֽ��ϴ�.
	�������� ��� �迭 �ε����� 3���� ���� �������� ����ϸ� 0, 1, 2, 3, 4 ��° ���� ���� ����� �� �ֽ��ϴ�.
*/