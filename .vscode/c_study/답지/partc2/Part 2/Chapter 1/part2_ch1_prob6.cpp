#include <stdio.h>

int main () {
	char array1[5] = {'A', 'B', 'C', 'D', 'E'};
	int array2[5] = {10, 20, 30, 40, 50};
	double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	int i;

	for (i = 0; i < 5; i++) 
		printf("array1�� %d ��° ���� �ּҴ� %X, ���� %c �Դϴ�.\n", i, &array1[i], *(array1+i));
	for (i = 0; i < 5; i++) 
		printf("array2�� %d ��° ���� �ּҴ� %X, ���� %d �Դϴ�.\n", i, &array2[i], *(array2+i));
	for (i = 0; i < 5; i++) 
		printf("array3�� %d ��° ���� �ּҴ� %X, ���� %lf �Դϴ�.\n", i, &array3[i], *(array3+i));

	return 0;
}

