#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

void main () 
{
	int i;
	printf("�ʿ��� �޸� ���� : ");
	scanf("%d", &i);
	allocate(i);
}

void allocate(int i) 
{
	//int a[i];
	int* a = (int*)malloc(i);
	printf("%d�� ������ �Ҵ��Ͽ����ϴ�. \n", i);
}