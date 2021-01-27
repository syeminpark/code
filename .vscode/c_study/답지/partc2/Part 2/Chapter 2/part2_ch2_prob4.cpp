#include <stdio.h>

int main()
{
	int array1[4][3] = {0};
	int array2[4][3] = {0};
	int result[4][3] = {0};
	int i, j, choice = 0;

	printf("�հ� ���� ����� �����Ͻðڽ��ϱ�? (1.��, 2. ��)\n");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d�� %d�Ŀ� �� ���ڸ� �Է����ֽʽÿ�.", i + 1, j + 1);
				scanf("%d", &array1[i][j]);
			}
		}

		printf("\n");
		printf("2��° ����Դϴ�.\n");
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d�� %d�Ŀ� �� ���ڸ� �Է����ֽʽÿ�.", i + 1, j + 1);
				scanf("%d", &array2[i][j]);
			}
		}

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				result[i][j] = array1[i][j] + array2[i][j];
			}
		}

		printf("����Դϴ�. \n");
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%3d", result[i][j]);
			}
			printf("\n");
		}
		break;

	case 2:

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d�� %d�Ŀ� �� ���ڸ� �Է����ֽʽÿ�.", i + 1, j + 1);
				scanf("%d", &array1[i][j]);
			}
		}

		printf("\n");
		printf("2��° ����Դϴ�.\n");
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d�� %d�Ŀ� �� ���ڸ� �Է����ֽʽÿ�.", i + 1, j + 1);
				scanf("%d", &array2[i][j]);
			}
		}

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				result[i][j] = array1[i][j] - array2[i][j];
			}
		}

		printf("����Դϴ�. \n");
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%5d", result[i][j]);
			}
			printf("\n");
		}
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}
}

/*

�̹� ������ �پ��� ������� Ǯ �� �ְ�����,
���� �ش信���� �迭 ������ �̸� ���ǹ��� �ʰ�
����ڿ��� �Է��� �޴� ������� �����Ͽ����ϴ�.
���� ������ ���� �迭�� �����͸� ����صξ��ٰ�
������ �������� ���� ���� ����Ͽ�
����� ����ϵ��� �Ǿ��ֽ��ϴ�.

*/