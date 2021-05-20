/*
*	보드게임 만들기 21.05.13
*	1. 전체 칸의 갯수 61개
*	2. 플레이어가 가지고 있어야 할 것
*		- 위치정보(말) : 0 부터 시작
*		- 돈 : 5,000,000 부터 시작
*		- 아이템 인벤토리 (나중에 가능하면)
*	3. 파산의 기준
*		- 0원이 되자마자 파산
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//칸의 최대갯수
	int max_length = 61;

	//플레이어의 위치
	int position = 0;

	//주사위
	int dice;

	int money = 5000000;

	srand(time(0));
	rand();

	printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);


	while (1)
	{
		getchar();		// 주사위를 던지기 위해서는 엔터키를 눌러야 한다.
		//주사위 던지기 (1부터 6까지)
		dice = rand() % 6 + 1;
		position = position + dice;
		printf("주사위를 던져서 %d가 나왔습니다.\n", dice);
		printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);

		// 7번에 있을때는 3번으로 이동
		if (position == 7)
		{
			printf("3번 위치로 이동합니다.\n");
			position = 3;
			printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
		}

		if (position == 15)
		{
			printf("주식이 떨어져 200만원이 차감됩니다.\n");
			money -= 2000000;
			printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
		}

		// 파산처리
		if (money <= 0)
		{
			printf("파산 하였습니다ㅠㅠㅠ\n");
			break;
		}

		// 61을 넘기면 목적지에 도착함
		if (position > 61)
		{
			printf("축하합니다. 목적지에 도달하였습니다.\n");
			break;
		}
	} // while문 끝
	printf("게임이 끝났습니다.");
}