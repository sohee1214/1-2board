#include <stdio.h>

void cal_grade(int score);
double cal_average(int score_a, int score_b, int score_c);

void main(void)
{
	int C_score;
	printf("����� ������ �Է��ϼ��� : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("�ڹ� ������ �Է��ϼ��� : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("��ǻ�ͱ��� ������ �Է��ϼ��� : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);

	double average = cal_average(C_score, java_score, CA_score);
	printf("�� ������ ����� %f�Դϴ�", average);
}

// �Է¹��� ����(score)�� ���� ����� ���
void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A�Դϴ� \n");
	else if (80 <= score)
		printf("B�Դϴ� \n");
	else if (70 <= score)
		printf("C�Դϴ� \n");
	else if (60 <= score)
		printf("D�Դϴ� \n");
	else
		printf("E�Դϴ� \n");
}

// �� ������ ����� ��ȯ
double cal_average(int score_a, int score_b, int score_c)
{
	return (double)(score_a + score_b + score_c) / (double)3;
}