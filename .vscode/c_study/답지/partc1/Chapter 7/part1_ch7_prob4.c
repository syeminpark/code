#include <stdio.h>
int main(void)
{
	int num, i;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num); 

	for (i = 1; i < 10; i++)
		printf("%d * %d = %d�Դϴ�. \n", num, i, num*i);
	
	return 0;

}