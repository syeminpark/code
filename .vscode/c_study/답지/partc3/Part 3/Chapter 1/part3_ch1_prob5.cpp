#include <stdio.h>
struct point
{
	int x;
	int y;
};
int main(void)
{
	struct point array[2]={1, 1, 2, 2};
	struct point* p=NULL;

	p=array;
	printf("%d %d \n", array[0].x, array[0].y);
	printf("%d %d \n", array[1].x, array[1].y);
	printf("%d %d \n", p[0].x, p[0].y);
	printf("%d %d \n", p[1].x, p[1].y);

	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (p+1)->x, (p+1)->y);

	return 0;
}

/* �ؼ�
	����ü ������ p�� ������ ����ü�迭 array�� �������մϴ�.
	�̶� ����ü�迭�� ���� ���������� 1, 1, 2, 2�� �Ҵ�Ǹ鼭 ������ struct point������ ������ �� �ֽ��ϴ�.
	���� �޸𸮸� ����� struct point���� ���߾� ���� ������ ���� �ֽ��ϴ�.
	��, array[0], array[1]�� ��� int�� 2���� ũ��� ������, ���� x, y�� ����ü ���� ������ ���� �� ���� �ֽ��ϴ�.

	����  ����ü ������ p�� array������ ������ �ϰ� ������, p->x, p->y�� ���� array[0]->x, array[0]->y�� ���� ����, 	(p+1)->x, (p+1)->y�� ���� array[1]->x, array[1]->y�� ���� ���� ����մϴ�.
*/