#include <stdio.h>

struct point
{
	unsigned int num;
	char bloodtype;
	double optical1, optical2;
	int weight;
};

int main()
{
	struct point array[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("�й�: ");
		scanf("%u", &array[i].num);
		printf("������: ");
		scanf("%c", &array[i].bloodtype);
		printf("�÷�: ");
		scanf("%lf %lf", &array[i].optical1, &array[i].optical2);
		printf("������: ");
		scanf("%d", &array[i].weight);
	}

	printf("\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("�й�: %u\n������: %c\n�÷�: %.1lf, %.1lf\n������: %d\n\n", array[i].num, &array[i].bloodtype, array[i].optical1, array[i].optical2, array[i].weight);
	}

	return 0;
}

/*

1�� ������ ����ü�� �̿��Ͽ� ������ �ش� ����ü�� �����͸� �ְ�
�װ��� ����ϴ� �����Դϴ�.
5���� ������ �Է¹ޱ� ���� for���� �̿��ϰ�
���������� ������ �Է��� �����ڿ� for���� �ٽ� ����Ͽ� �Է¹��� ������
������ݴϴ�.

*/
