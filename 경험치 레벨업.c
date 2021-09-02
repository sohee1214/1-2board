#include <stdio.h>

void cal_grade(int score);
double cal_average(int score_a, int score_b, int score_c);

void main(void)
{
	int C_score;
	printf("씨언어 점수를 입력하세요 : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("자바 점수를 입력하세요 : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("컴퓨터구조 점수를 입력하세요 : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);

	double average = cal_average(C_score, java_score, CA_score);
	printf("세 과목의 평균은 %f입니다", average);
}

// 입력받은 점수(score)에 대한 등급을 출력
void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A입니다 \n");
	else if (80 <= score)
		printf("B입니다 \n");
	else if (70 <= score)
		printf("C입니다 \n");
	else if (60 <= score)
		printf("D입니다 \n");
	else
		printf("E입니다 \n");
}

// 세 과목의 평균을 반환
double cal_average(int score_a, int score_b, int score_c)
{
	return (double)(score_a + score_b + score_c) / (double)3;
}