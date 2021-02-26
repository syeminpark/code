#include <stdio.h>
#include <string.h>

int main()
{
	char inputStr[10][15], temp[15];
	int i = 0, j = 0, max = 10;

	printf("�Է��� �����Ϸ��� �׳� ���͸� ��������.\n");

	//�Է�
	for (i = 0; i < 10; i++)
	{
		printf("%d��°? ", i + 1);
		gets(temp);

		if (strlen(temp) == 0)
		{
			max = i;
			break;
		}

		strcpy(inputStr[i], temp);
	}

	// ����
	for (i = max - 1; i >= 0; i--)
	{
		for (j = max - 1; j > i; j--)
		{
			if (strcmp(inputStr[i], inputStr[j]) > 0)
			{
				strcpy(temp, inputStr[i]);
				strcpy(inputStr[i], inputStr[j]);
				strcpy(inputStr[j], temp);
			}
		}
	}

	//���
	for (i = 0; i < max; i++)
	{
		printf("%s  ", inputStr[i]);
	}
	// puts("");
	return 0;

	/*�ؼ�
������ �迭 temp�� �Է��� �ް�, strlen()�Լ��� �Է¹��� ���ڿ��� ���̸� �����Ͽ� ���̰� 0�̸� �Է��� �ߴ��Ѵ�.
���ڿ��� �Է� ���� �� ���� inputStr 2���� �迭�� ������� ������ �Ѵ�.

�Է��� ��� ������ inputStr�迭�� ������������ ������ �Ѵ�.
���ı�����δ� ��ǰ������ ����Ͽ���.

������ ������ ������� ���ڿ��� ����� �� �����Ѵ�.
*/