#include <stdio.h>
int Alpha(char x);

int main(void) {
	char ch;
	int result;

	printf("���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &ch);
	result = Alpha(ch);
	printf("�Է��� %c�� ���ĺ� ������ %d��° �����Դϴ�. \n", ch, result);

	return 0;
}

int Alpha(char x) {
	int num;
	
	if(x >= 65 && x <= 90) {
		num = x - 64;
		return num;
	}
	else {
		num = x - 96;
		return num;
	}
}

/*

char���� ������ int������ �ڵ� ĳ���õ� �� ������, ������ ���ڴ� ������ Ű���� ������ �ֽ��ϴ�.
�̸� �ƽ�Ű �ڵ��� �ϸ�, Alpha�Լ��� if-else���� �̿��Ͽ� �б�Ǿ� �ִ� ���� ��ҹ��ڿ� ��� �����ϱ� ���ؼ��Դϴ�.
���� �� �ڵ�� ���ĺ� �̿��� ��ȣ�� ���ڸ� �Է����� ���� �����ϹǷ� else ��� else if�� ����Ͽ� ������ �߰����� �ʿ䰡 ������,
������ �ǵ��� �Լ��� �����ϴ� �� �����Ƿ� ������ else�θ� ó���ϵ��� �մϴ�.

*/