#include<stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++) // �ٱ��� for��
	{
		if (dan == 4)
		{
			break;	// �ٱ��� for���� �����
		}
		for (int i = 1; i <= 9; i++) // ���� for��
		{
			if (i == 5)
			{
				break;	// ���� for���� �����
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}