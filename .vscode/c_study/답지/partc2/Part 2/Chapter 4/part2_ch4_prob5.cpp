#include <stdio.h>

int main () 
{
	char *string[2] = {"I Love C", "Hello World"};

	// "Hello World" ���ڿ��� 6��° ������ W���� ����ϵ��� ����
	printf("%s %s \n", string[0], string[1]+6);
		
	return 0;
}