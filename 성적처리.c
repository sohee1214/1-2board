#include <stdio.h>

#include <stdio.h>

//�Է¹��� ����(score)�� ���� ����� ����Ѵ�
void cal_grade(int score);

double cal_average(int score_a, int score_b, int score_c);

void main(void)
{
	int score[3];

	printf("�������� �Է��ϼ��� : ");
	scanf_s("%d", &score[0]);
	cal_grade(score[0]);

	printf("�ڹ������� �Է��ϼ��� : ");
	scanf_s("%d", &score[1]);
	cal_grade(score[1]);

	printf("��ǻ�ͱ��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &score[2]);
	cal_grade(score[2]);

	double average;
	average = cal_average(score[0], score[1], score[2]);
	printf("�� ������ ����� %f�Դϴ�", average);
}

@@ - 42, 5 + 45, 6 @@ void cal_grade(int score)
//�� ������ ����� ��ȯ
double cal_average(int score_a, int score_b, int score_c)
{
	return (double)(score_a + score_b + score_c) / (double)3;
}