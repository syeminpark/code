#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count(char*);

int main()
{
	char str[80];
	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s",str);
	strlwr(str);//��ҹ��� �ҹ��ڷ� 
	count(str);

	return 0;
}

int count(char* inputStr){
	int countArr[26]={0,};//���ĺ� ������ŭ �迭 ����
	int cnt=0, srcLen=0, i=0;

	srcLen=strlen(inputStr);//���ڿ� ���� ����

	for(cnt=0;cnt<srcLen;cnt++){
		if(inputStr[cnt]-'a'>=0 && inputStr[cnt]-'a'<=122){//���ĺ��̸�
			countArr[inputStr[cnt]-'a']++;
		}
		else
			continue;
	}

	//���
	for(i=0; i<26; i++){
		printf("%c:%d��\n",97+i, countArr[i]);
	}


	return 0;
}

/*�ؼ�
str�迭�� �Է¹��� ������ �����մϴ�.
strlwr()�Լ��� ������ ��� �ҹ��ڷ� �����մϴ�.
���� count()�Լ��� ������ ������ ���ϴ�.
count()�Լ� ������ ������ ���� if������
	if(inputStr[cnt]-'a'>=0 && inputStr[cnt]-'a'<=122)
���ڿ��� cnt ��ġ�� ���ڰ� �ҹ��� ���ĺ����� �˻縦 �մϴ�.
�ҹ��� ���ĺ��̸� countArr�迭�� �ش� ������ ������ �ϳ� ������ŵ�ϴ�.
	countArr[inputStr[cnt]-'a']++;
���� ���ĺ��� �ƴ϶�� countinue ������ ���� ���� ���ҷ� �Ѿ�ϴ�.

���ڿ����� ���ĺ� ������ ��� �� ���� printf������ ����� �մϴ�.
*/