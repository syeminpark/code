#include<stdio.h>
#include<string.h>

int main(void){
	char inputStr[80], result[80];

	printf("���ڿ��� �Է��ϼ��� :\t");
	gets(inputStr);
	
	strcpy(result, inputStr);
	strrev(result);

	printf("�յڰ� �������� ��� :\t%s\n", result);

	return 0;
}

/*�ؼ�
���ڿ��� �յڷ� ������ �����̴�.
inputStr�迭�� ���ڿ��� �Է¹޴´�.
���ڿ��� ������ ǥ�� ���ڿ� ó���Լ��� strrev()�̴�.
strrev()�Լ��� �̿��Ͽ� ���ڿ��� ������ �� ����Ѵ�.
*/