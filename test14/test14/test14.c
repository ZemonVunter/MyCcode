#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"game.h"



void meau() {
	printf("**********************************************\n");
	printf("***************   1.play  ********************\n");
	printf("***************   0.exit  ********************\n");
	printf("**********************************************\n");
}
void game() {
	//存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//'0'--不是雷
	//存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };//"*"--未排查
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show,ROW,COL);
	//布置雷
	setMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//查找雷
	FindMine(mine, show, ROW, COL);
}
void test() {
	int input = 0;
	//time返回时间戳生成种子
	srand((unsigned int)time(NULL));
	do {
		meau();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}

