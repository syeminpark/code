#include <stdio.h>

void *add(int i, int j);

int main () 
{
	int a, b;
	int *p;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &a);

	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d", &b);

	p = add(a, b);
	
	printf("����� %d �Դϴ�. \n", *p);

	return 0;
}

void *add(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i + j;

	return p;
}

void *subtract(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i - j;

	return p;
}

void *multiply(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i * j;

	return p;
}

void *divide(int i, int j) {
	
	void *p;
	static double result;

	p = &result;

	result = i / j;

	return p;
}