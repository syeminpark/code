#include <stdio.h>

int main() {
	int a;
	int result;
	int result1;
	int result2;
	int result3;
	int final;


	printf("0000�� 1111������ 2������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	result = (a / 1000) * 8;
	result1 = ((a % 1000) / 100) * 4;
	result2 = ((a % 100) / 10) * 2;
	result3 = (a % 10) * 1;

	final = result + result1 + result2 + result3;

	printf("������ %d�� 10������ �ٲٸ� %d�Դϴ�.\n", a, final);

	return 0;
}

/*

���������� �ԷµǾ��ٰ� �����ϰ� �̸� �������� ����մϴ�.
�� �ڸ����� �����ϱ� ���� result, result1, result2, result3���� �����ϰ� �������� final�� �����մϴ�.
���������� �Էµ��� �ʾ��� ���� ��쿡 ���� ��ȿ�� �˻�� ���Ե��� ���� �ҽ� �ڵ��Դϴ�.

*/