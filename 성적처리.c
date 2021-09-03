#include <stdio.h>

#include <stdio.h>

//입력받은 점수(score)에 대한 등급을 출력한다
void cal_grade(int score);

double cal_average(int score_a, int score_b, int score_c);

void main(void)
{
	int score[3];

	printf("씨점수를 입력하세요 : ");
	scanf_s("%d", &score[0]);
	cal_grade(score[0]);

	printf("자바점수를 입력하세요 : ");
	scanf_s("%d", &score[1]);
	cal_grade(score[1]);

	printf("컴퓨터구조 점수를 입력하세요 : ");
	scanf_s("%d", &score[2]);
	cal_grade(score[2]);

	double average;
	average = cal_average(score[0], score[1], score[2]);
	printf("세 과목의 평균은 %f입니다", average);
}

@@ - 42, 5 + 45, 6 @@ void cal_grade(int score)
//세 과목의 평균을 반환
double cal_average(int score_a, int score_b, int score_c)
{
	return (double)(score_a + score_b + score_c) / (double)3;
}