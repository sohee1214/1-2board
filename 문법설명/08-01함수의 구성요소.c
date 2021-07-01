#include <stdio.h>

int sum(int num1, int num2)
{
	return num1 + num2;
}

void main(void)
{
	int a = 1, b = 2;
	int c;
	c = sum(1,5);
	printf("cÀÇ °ªÀº %d\n", c);
}