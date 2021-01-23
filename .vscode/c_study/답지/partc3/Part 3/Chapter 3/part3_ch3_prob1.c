#include <stdio.h>
#include <stdlib.h>

int main(void){
	char fileName[] = "99.txt";
	int i, j;
	FILE* outFile = NULL;


	//������� ����
	printf("������� 99.txt ����\n");
	if( (outFile = fopen(fileName, "wt")) == NULL ){
		exit(-1);
	}

	
	//������ ���Ͽ� ���
	printf("������� 99.txt�� ������ ��� ����\n");
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9 ; j++){
			fprintf(outFile, "%d * %d = %d\n", i, j, i*j);
		}
		fprintf(outFile, "\n");
	}
	printf("������� 99.txt�� ������ ��� �Ϸ�\n");

	//���� ����� ������ ���� ����
	printf("������� 99.txt ����\n");
	fclose(outFile);
	return 0;
}
/*�ؼ�
outFile ���������� ������ fopen()�Լ��� ����� ������ �����Ѵ�.
������� ������ "wt"�ɼ����� �����Ͽ�, �ؽ�Ʈ ��� ���� �����Ѵ�.
�������� ȭ�鿡 ����ϴ� �Ͱ� �����ϰ� �ۼ��ϵ�, fprintf()�Լ��� ���������� outFile�� ����Ѵ�.
������ ����� ���� �� fclose()�Լ��� ���������� outFile�� �ݴ´�.
*/