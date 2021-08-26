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
	// 지역변수 a
	int a = 0;
	a++;
	printf("%d\n", a);

	// 함수의 호출이 끝나면 함수 내부에 있는 지역변수 a도 사라진다
}

void static_increase(void)
{
	// static(정적)변수 a
	static int a = 0;
	a++;
	printf("%d\n", a);

	// 함수의 호출이 끝나도 함수 내부에 있는 static변수 a는 사라지지 않는다
	// 프로그램이 완전히 종료될 때, static변수는 사라진다
}