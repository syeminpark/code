#include "part3_ch5_prob4_point.h"

void main () {

	POINT a, b, *c, *d;
	
	a.x = 10;
	a.y = 15;
	b.x = 5;
	b.y = 10;

	printf("a�� x��ǥ: %d, y��ǥ: %d\n", a.x, a.y);
	printf("b�� x��ǥ: %d, y��ǥ: %d\n", b.x, b.y);

	c = add(&a, &b);
	d = subtract(&a, &b);

	printf("c(a+b)�� x��ǥ: %d, y��ǥ: %d\n", c->x, c->y);
	printf("d(a-b)�� x��ǥ: %d, y��ǥ: %d\n", d->x, d->y);
}