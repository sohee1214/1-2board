#include <stdio.h>

void main(void)
{
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (90 <= score && score <= 100)
		printf("A�Դϴ� \n")
	else if (80 <= score)
		printf("B�Դϴ� \n");
	else if (70 <= score)
		printf("C�Դϴ� \n");
	else if (60 <= score)
		printf("D�Դϴ� \n");
	else
		printf("E�Դϴ� \n");
}