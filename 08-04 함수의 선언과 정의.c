#include <stdio.h>

// �Լ��� ����(declaration)
int sum(int a, int b);
int sum2(int a, int b);

void main(void)
{
	int c = 5;
	int d = 6;
	int aaaaa = sum(c, d);
	printf("%d", aaaaa);
}

// �Լ��� ����(definition)
int sum(int a, int b)
{
	return sum2(a, b);
}

int sum2(int a, int b)
{
	return a * b;
}