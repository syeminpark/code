/* ex3.c */
#include <stdio.h>
void main()
{
	int red = 1, blue = 2;	//1�� ������ �ֽ�, 2�� ���̴�
	int yellow;			//����

	
	printf("before \n");
	printf("red = %d, blue = %d \n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after \n");
	printf("red = %d, blue = %d \n", red, blue);

	return 0;
}

/* �ؼ�
	������ ������ ����� ������ �����ϴ�.
*/