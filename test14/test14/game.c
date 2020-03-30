#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	//
	for (i = 0; i <= col; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d\t", i);
		for (j = 1; j <= col; j++) {
			printf("%c\t", board[i][j]);
		}
		printf("\n");
	}
}

void setMine(char mine[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count--;
		}
	}
}
GetMineCount(char mine[ROWS][COLS], int x, int y) {
	    return(mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT) {
		printf("请输入排查的坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标输入有误，请重新输入！！！");
		}

	}
	if (win == row * col - EASY_COUNT) {
		printf("你才排完雷，弱爆了！\n");
	}
}

