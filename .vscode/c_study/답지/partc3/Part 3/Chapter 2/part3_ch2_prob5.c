#include <stdio.h>
#include <stdlib.h>

int main(void){
	char inputS[80];
	int result=0;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(inputS);

	//���ڿ��� ������ ��ȯ
	result = atoi(inputS);
	printf("���ڿ��� ������ ���: %d\n", result);

	return 0;
}

/*�ؼ�
�Է¹��� ���ڿ��� ���ڸ� ������ ������ ���·� ��ȯ�ϴ� ǥ�� �Լ� atoi()�Լ��� ����մϴ�.
*/