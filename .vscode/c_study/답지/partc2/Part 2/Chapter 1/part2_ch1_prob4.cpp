#include <stdio.h>

int main () {
	int arr[9] = {0};
	int inputNum = 0, i = 0;

	printf("�������� ����� ���� �Է��ϼ���: ");
	scanf("%d", &inputNum);

	for (i = 0; i < 9; i++) 
		arr[i] = inputNum * (i+1);

	for (i = 0; i < 9; i++) 
		printf("%d x %d = %d\n", inputNum, i+1, arr[i]);

	return 0;
}

