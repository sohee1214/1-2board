#include <stdio.h>
void main(void)
{
	char str[20] = "Hello world";

	//w������ �ι��ڸ� �־ ���ڿ��� ����
	str[7] = '\0';
	print("%s", str);
}