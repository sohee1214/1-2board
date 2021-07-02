#include <stdio.h>

int factorial(int cuty_num)
{
	if (cuty_num == 1) {
		return 1;
	}
	return cuty_num * factorial(cuty_num - 1);
}

void main(void)
{
	int  a = factorial(1);
	printf("%d", a);
}