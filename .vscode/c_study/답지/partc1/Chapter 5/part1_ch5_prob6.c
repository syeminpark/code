#include <stdio.h>

int main() {
	double year=0;
	double life=0;
	double life_normal=100;
	double cigar=0;

	printf("�� �Ⱓ?(���� : ��) : ");
	scanf("%lf", &year);

	printf("�Ϸ翡 �� ���� ��? : ");
	scanf("%lf", &cigar);
	
	life = life_normal - 0.0014 * cigar * 365 * year;
	printf("��� ���� (���=100��) : %.4lf �� \n", life);

	return 0;
}

/*

���������� ��� �� ���ǿ� ���� ��Ʈ�� �����Ƿ�,
���Ⱓ�Ӹ� �ƴ϶� �Ϸ翡 ��Ǹ� �Ǵ� ���� ����ϴ�.
�̸� ���� ������ ����ϰ� ����մϴ�.
%.4lf���� .4�� ���� ���� �Ҽ������Ϸ� 4�ڸ������� ����ϱ� �����Դϴ�.

�Ʒ��� ������ �� �ִ� �� �ٸ� ���Դϴ�.

#include <stdio.h>

int main(void)
{
	int cigarette;
	int day, year, total, time, daytime, result;
	int rest, restmonth, restday;

	printf("������ 100������̰� 20����� 20�⵿�� ��踦\n");
	printf("�Ϸ翡 ��� �Ѱ��� �ɴٰ� �����Ͽ�����\n\n");
 
	cigarette = 2; //�Ѱ�ġ�� 2��
	day = cigarette *20; //�Ϸ翡 �Ѱ�
	year = day *365; //365�� �� ��跮
	total = year * 20; //20�⵿�� �� ��跮

	printf("����� ���� �з� : %d��\n", total);
	time = total/60;
	printf("����� ���� �ð��� : %d�ð� \n", time);
	daytime = time/24;
	printf("����� ���� �� : %d��\n", daytime);
 
	rest = 365-daytime;
	printf("��� �ִ� ���� : 99�� %d��\n", rest);
	restmonth = rest/30;
	restday = rest%30;
	printf("��� �ִ� ���� : 99�� %d�� %d��\n\n", restmonth, restday);
	return 0;
}

*/