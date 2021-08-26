#include <stdio.h>

void local_increase(void);
void static_increase(void);

void main(void)
{
	for (int i = 1; i <= 5; i++) {
		//local_increase();
		static_increase();
	}
}

void local_increase(void)
{
	// �������� a
	int a = 0;
	a++;
	printf("%d\n", a);

	// �Լ��� ȣ���� ������ �Լ� ���ο� �ִ� �������� a�� �������
}

void static_increase(void)
{
	// static(����)���� a
	static int a = 0;
	a++;
	printf("%d\n", a);

	// �Լ��� ȣ���� ������ �Լ� ���ο� �ִ� static���� a�� ������� �ʴ´�
	// ���α׷��� ������ ����� ��, static������ �������
}