#include <stdio.h>

struct student
{
	int id;
	char *lastName;
	double dData;
};

int main()
{
	struct student **pp;
	struct student *p;
	struct student stu;

	p=&stu;
	pp=&p;

	stu.id=20101323;
	stu.lastName="Park";
	stu.dData=160;

	printf("%d\n", stu.id);
	printf("%s\n", stu.lastName);
	printf("%lf\n", stu.dData);
	
	return 0;
}

/* �ؼ�
	����ü, ����ü ������, �����Ϳ� ���� �����Ϳ� ���� �����Դϴ�.
	student��� ����ü�� �����Ͽ� stu��� ���������� student ����ü�� �����ϰ�, pp�� p�� ����ü �����͸� �����Ͽ� ������ �������մϴ�.
	�̶� pp�� ���� ����ü �����ͷ� ����ü �����͸� ����Ʈ �� �� �ֽ��ϴ�.
*/