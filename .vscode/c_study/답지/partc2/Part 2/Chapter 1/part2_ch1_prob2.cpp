
#include <stdio.h>

int main () {
	int jumsu[10], i, sum=0;

	for (i = 0; i < 10; i++) {
		printf("%d��° �л��� ������? ", i+1);
		scanf("%d", &jumsu[i]);
	}

	for (i = 0; i < 10; i++) 
		sum += jumsu[i]; // sum = sum + jumsu[i];

	printf("���� %d, ��� %lf\n", sum, (double)sum/10);

	return 0;
}
